#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C display(0x27, 16, 2);

// Definição dos pinos
int sensorLuminosidade = A1;
int sensorTemperatura = A2;
int sensorUmidade = A3;

int ledOk = 5;
int ledAlerta = 6;
int ledCritico = 7;

int alarme = 8;

// Desenho do termômetro
byte termometro[8] = {
  B00100,
  B01010,
  B01010,
  B01010,
  B01010,
  B01010,
  B11111,
  B11111
};

void setup() {

  pinMode(ledOk, OUTPUT);
  pinMode(ledAlerta, OUTPUT);
  pinMode(ledCritico, OUTPUT);
  pinMode(alarme, OUTPUT);

  Serial.begin(9600);

  display.init();
  display.backlight();

  // Cria o desenho personalizado
  display.createChar(0, termometro);

  display.setCursor(0, 0);
  display.print("Vinheria");

  display.setCursor(0, 1);
  display.print("Monitoramento");

  delay(2000);

  display.clear();
}

void loop() {

  
  float acumuladorTemp = 0;
  float acumuladorUmidade = 0;
  long acumuladorLuz = 0;

  for (int contador = 0; contador < 5; contador++) {

    int leituraTemp = analogRead(sensorTemperatura);

    float tensao = (leituraTemp / 1023.0) * 5000.0;

    acumuladorTemp += (tensao - 500.0) * 0.1;

    acumuladorUmidade += map(analogRead(sensorUmidade), 0, 1023, 0, 100);

    acumuladorLuz += analogRead(sensorLuminosidade);

    delay(100);
  }

  float temperaturaAtual = acumuladorTemp / 5;
  float umidadeAtual = acumuladorUmidade / 5;
  int luminosidadeAtual = acumuladorLuz / 5;

  
  Serial.print("Luminosidade: ");
  Serial.print(luminosidadeAtual);

  Serial.print(" | Temperatura: ");
  Serial.print(temperaturaAtual, 1);
  Serial.print("C");

  Serial.print(" | Umidade: ");
  Serial.print((int)umidadeAtual);
  Serial.println("%");

  

  if (luminosidadeAtual < 100) {

    digitalWrite(ledOk, LOW);
    digitalWrite(ledAlerta, LOW);
    digitalWrite(ledCritico, HIGH);
    digitalWrite(alarme, HIGH);

    display.clear();

    display.setCursor(0, 0);
    display.print("Ambiente Claro");

    display.setCursor(0, 1);
    display.print("Luminosidade");

  } 
  else if (luminosidadeAtual < 350) {

    digitalWrite(ledOk, LOW);
    digitalWrite(ledAlerta, HIGH);
    digitalWrite(ledCritico, LOW);
    digitalWrite(alarme, LOW);

    display.clear();

    display.setCursor(0, 0);
    display.print("Meia Luz");

    display.setCursor(0, 1);
    display.print("Atencao");

  } 
  else {

    digitalWrite(ledOk, HIGH);
    digitalWrite(ledAlerta, LOW);
    digitalWrite(ledCritico, LOW);
    digitalWrite(alarme, LOW);

    display.clear();

    display.setCursor(0, 0);
    display.print("Luminosidade");

    display.setCursor(0, 1);
    display.print("Ideal");
  }

  delay(3000);

  

  if (temperaturaAtual >= 10.0 && temperaturaAtual <= 15.0) {

    digitalWrite(ledOk, HIGH);
    digitalWrite(ledAlerta, LOW);
    digitalWrite(ledCritico, LOW);
    digitalWrite(alarme, LOW);

    display.clear();

    // desenho
    display.setCursor(0, 0);
    display.write(byte(0));

    display.print(" Temperatura");

    display.setCursor(0, 1);
    display.print("OK ");
    display.print(temperaturaAtual, 1);
    display.print(" C");

  } 
  else if (temperaturaAtual > 15.0) {

    digitalWrite(ledOk, LOW);
    digitalWrite(ledAlerta, HIGH);
    digitalWrite(ledCritico, LOW);
    digitalWrite(alarme, HIGH);

    display.clear();

    // desenho
    display.setCursor(0, 0);
    display.write(byte(0));

    display.print(" Temp Alta");

    display.setCursor(0, 1);
    display.print(temperaturaAtual, 1);
    display.print(" C");

  } 
  else {

    digitalWrite(ledOk, LOW);
    digitalWrite(ledAlerta, HIGH);
    digitalWrite(ledCritico, LOW);
    digitalWrite(alarme, HIGH);

    display.clear();

    // desenho
    display.setCursor(0, 0);
    display.write(byte(0));

    display.print(" Temp Baixa");

    display.setCursor(0, 1);
    display.print(temperaturaAtual, 1);
    display.print(" C");
  }

  delay(3000);

  

  if (umidadeAtual >= 50.0 && umidadeAtual <= 70.0) {

    digitalWrite(ledOk, HIGH);
    digitalWrite(ledAlerta, LOW);
    digitalWrite(ledCritico, LOW);
    digitalWrite(alarme, LOW);

    display.clear();

    display.setCursor(0, 0);
    display.print("Umidade OK");

    display.setCursor(0, 1);
    display.print((int)umidadeAtual);
    display.print("%");

  } 
  else if (umidadeAtual > 70.0) {

    digitalWrite(ledOk, LOW);
    digitalWrite(ledAlerta, LOW);
    digitalWrite(ledCritico, HIGH);
    digitalWrite(alarme, HIGH);

    display.clear();

    display.setCursor(0, 0);
    display.print("Umidade Alta");

    display.setCursor(0, 1);
    display.print((int)umidadeAtual);
    display.print("%");

  } 
  else {

    digitalWrite(ledOk, LOW);
    digitalWrite(ledAlerta, LOW);
    digitalWrite(ledCritico, HIGH);
    digitalWrite(alarme, HIGH);

    display.clear();

    display.setCursor(0, 0);
    display.print("Umidade Baixa");

    display.setCursor(0, 1);
    display.print((int)umidadeAtual);
    display.print("%");
  }

  delay(3000);
}
