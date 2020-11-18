/*
Programa para trabalhar com a comunicação serial
*/

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

const int LED_LIGADO = LOW;
const int LED_DESLIGADO = HIGH;
const int ENTRADA_ACIONADA = LOW;
const int ENTRADA_DESACIONADA = HIGH;
const int LED1 = D5;
const int LED2 = D6;
const int LED3 = D7;
const int ENTRADA_01 = D1;
const int ENTRADA_02 = D2;
const int T_ON[] = {0,25,50,75,99,122,144,164,183,200,216,229,240,248,254,258,259,258,255,248,240,229,216,201,184,165,144,122,99,75,51,25};
const int T_total = 260;
//Variáveis globais
char msg[30];
//Variável utilizada com o millis()
unsigned long tempoAnterior;
unsigned long tempoAnteriorCiclo;
//Indica que a variável será utilizada dentro de uma interrupção
volatile int posicao = 0;
//Variável utilizada para realizar debounce no botão
volatile unsigned long tempoBotao;

//Variáveis para comunicação Wifi
const char* URL_SERVIDOR = "http://viacep.com.br/ws/01001000/json/";
//Cliente para realizar a requisição
WiFiClient client;
HTTPClient http;

//Funções de interrupção - ISR
void ICACHE_RAM_ATTR conta_pulsos(){
  if(micros()-tempoBotao >= 100){
    posicao = 0;
    tempoBotao = micros();
  }
}

void inicializa_hardware(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  digitalWrite(LED1, LED_DESLIGADO);
  digitalWrite(LED2, LED_DESLIGADO);
  digitalWrite(LED3, LED_DESLIGADO);
  pinMode(ENTRADA_01, INPUT_PULLUP);
  pinMode(ENTRADA_02, INPUT_PULLUP);
  
  //Configura a interrupção externa
  attachInterrupt(digitalPinToInterrupt(ENTRADA_01), conta_pulsos,RISING);
  
  //Inicializar a comunicação
  Serial.begin(115200); //9600, 19200, 38400, 115200
  
  //Inicializa a comunicação Wifi
  inicializar_wifi();
}

void inicializar_wifi(){
  //Conecta com o nome e a senha da rede
  //LEMBRAR DE APAGAR ESSA INFORMAÇÃO AO SUBIR NO GITHUB!!
  WiFi.mode(WIFI_STA);
  WiFi.begin("SEU_REDE", "SUA_SENHA");
  //Aguarda a comunicação estar pronta
  Serial.print("Conectando");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Conectado,Dados da Conexão (IP): ");
  Serial.println(WiFi.localIP());
}

void realiza_requisicao_wifi(){
  //Verifica se a conexão foi realizada
  if(http.begin(client, URL_SERVIDOR)){
    Serial.print("Conectado!\n");
    //Pede os dados utilizando o método GET do HTTP
    int httpCode = http.GET();
    //Verifica se o código é valido
    if(httpCode > 0){
      Serial.print("Codigo HTTP:");
      Serial.println(httpCode);
      //Verifica se o código foi de requisicao realizad com sucesso e trata essas informações
      if(httpCode == HTTP_CODE_OK){
        //Pega os dados
        String payload = http.getString();
        Serial.println(payload);
      }
    } else {
      Serial.print("Algo deu errado!\n");
    }
    
    
  } else {
    Serial.print("Nao foi possivel conectar!\n");
  }
}

void pega_dado_com_arduinojson(){
  // Send request
  http.useHTTP10(true);
  http.begin(URL_SERVIDOR);
  http.GET();
  
  // Parse response
  DynamicJsonDocument doc(2048);
  deserializeJson(doc, http.getStream());
  
  // Read values
  Serial.println("Dados Recebidos:");
  //char msg[100];
  //sprintf(msg, "CEP:%s\n", doc["cep"].as<const char*>());
  //Serial.print(msg);
  Serial.print("CEP:");
  Serial.println(doc["cep"].as<const char*>());
  Serial.print("Logradouro:");
  Serial.println(doc["logradouro"].as<const char*>());
  Serial.print("DDD:");
  Serial.println(doc["ddd"].as<long>());
  
  // Disconnect
  http.end();
}

void pega_dado_com_arduinojson_do_ubidots(){
  // Send request
  http.useHTTP10(true);
  http.begin("http://things.ubidots.com/api/v1.6/devices/controlador/botao");
  http.addHeader("Content-Type", "application/json");
  http.addHeader("X-Auth-Token", "SEU_TOKEN");
  http.GET();
  
  // Parse response
  DynamicJsonDocument doc(2048);
  deserializeJson(doc, http.getStream());
  
  // Read values
  Serial.println("Dados Recebidos:");
  //char msg[100];
  //sprintf(msg, "CEP:%s\n", doc["cep"].as<const char*>());
  //Serial.print(msg);
  Serial.print("Botao:");
  Serial.println(doc["last_value"]["value"].as<long>());
  //Serial.println(doc);
  if(doc["last_value"]["value"].as<long>() == 1) digitalWrite(LED1, LED_LIGADO);
  else digitalWrite(LED1, LED_DESLIGADO);
  // Disconnect
  http.end();
}

void setup() {
  inicializa_hardware();
}


void loop() {
  //realiza_requisicao_wifi();
  //pega_dado_com_arduinojson();
  pega_dado_com_arduinojson_do_ubidots();
  delay(2000);
  //while(1) delay(50);
}

