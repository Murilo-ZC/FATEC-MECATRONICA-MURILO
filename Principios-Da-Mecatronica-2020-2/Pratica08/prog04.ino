const int ENTRADA_1 = 3;
const int ENTRADA_2 = 8;
const int LED_1 = 12;
const int LED_2 = 11;
const int LED_3 = 10;
const int LED_4 = 9;
const int LIGADO = HIGH;
const int DESLIGADO = LOW;
const int ENABLE = 2;
const int RS = 13;
const int LCD_D7 = 7;
const int LCD_D6 = 6;
const int LCD_D5 = 5;
const int LCD_D4 = 4;

#include <LiquidCrystal.h>
//Cria uma variável chamada lcd para usar o LCD
LiquidCrystal lcd(RS, ENABLE, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  //Configurar as entradas
  pinMode(ENTRADA_1, INPUT);
  pinMode(ENTRADA_2, INPUT);
  //Configurar as saídas
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  
  //Inicializa o LCD
  lcd.begin(16, 2);
  //POsicionar o cursor do LCD
  lcd.setCursor(0,0); //Coluna x Linha
  //Escrever uma msg no LCD
  lcd.print("Monitor Pot:");
  
}

void loop() {
  //Faz a leitura do potenciometro
  int pot = analogRead(5);
  //Limpa a linha no LCD
  lcd.setCursor(0,1);
  lcd.print("    ");
  //Escreve a msg no LCD
  lcd.setCursor(0,1);
  lcd.print(pot);
  //Atualiza a msg a cada 50ms
  delay(100);
}









