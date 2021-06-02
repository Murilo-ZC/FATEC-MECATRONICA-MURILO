/**
   BasicHTTPClient.ino Modificado
    Created on: 26.05.2021

*/
#include <ArduinoJson.h>
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>

//Constantes utilizadas no projeto
#define NOME_DA_REDE "minhaRede"
#define SENHA_DA_REDE "olamundo"

ESP8266WiFiMulti WiFiMulti;

void inicializaComunicacaoWifi() {
  //Inicializa a comunicação Serial para depuração - receber mensagens
  //para acompanhar o desenvolvimento.
  Serial.begin(115200);
  //Aguarda 4 segundos para estabelecer a conexão de rede
  for (uint8_t t = 4; t > 0; t--) {
    Serial.printf("[SETUP] WAIT %d...\n", t);
    Serial.flush();
    delay(1000);
  }
  //Conectando Wifi no modo Station
  WiFi.mode(WIFI_STA);
  //Configura o nome da rede e a senha da rede
  WiFiMulti.addAP(NOME_DA_REDE, SENHA_DA_REDE);
}


void setup() {
  inicializaComunicacaoWifi();
}

void tratarRequisicaoGetHttp(const char* site_para_realizar_requisicao) {
    WiFiClient client;
    HTTPClient http;

    if (http.begin(client, site_para_realizar_requisicao)) {

      int httpCode = http.GET();
      if (httpCode > 0) {
        //Entra no if se deu bom!
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
          //Cria um objeto para trabalhar com Json
          StaticJsonDocument<400> dados;
          if(deserializeJson(dados, payload.c_str()) == DeserializationError::Ok){
            Serial.println("Nome da rua:");
            Serial.println(dados["logradouro"].as<char *>());
          }
          //Opcional - para depuração
          Serial.println(payload);
        }
      } else {
        //A requisicao não deu certo!
        //Opcional - para depuração
        Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
      }
      http.end();

    } else {
      //Opcional - para depuração
      Serial.printf("[HTTP} Unable to connect\n");
    }

}

void loop() {
  //Programa principal - vai ficar sendo executado enquanto o microcontrolador estiver energizado. Wait for WiFi connection
  if ((WiFiMulti.run() == WL_CONNECTED)) {
    //Variáveis para lidar com a requisição HTTP e com o Cliente Wifi
    const char* site = "http://viacep.com.br/ws/01001000/json/";
    tratarRequisicaoGetHttp(site);
  }

  delay(10000);
}
