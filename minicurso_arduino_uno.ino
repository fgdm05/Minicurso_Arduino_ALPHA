#include <Servo.h>
Servo servo_motor_exemplo;

int variavel = 0;
void setup() {
  servo_motor_exemplo.attach(11);
  pinMode(10, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(A0, INPUT);
}
void loop() {
  func_servo();
}

void func_servo() {
  int angulo = map(analogRead(A0), 0, 1023, 0, 180);
  servo_motor_exemplo.write(angulo);
}

void pisca() {
  digitalWrite(10, 0);
  delay(1000);
  digitalWrite(10, 1);
  delay(1000);
}

void intensidade() {
  int intensidade = map(analogRead(A0), 0, 1023, 0, 255);   // lida/escrita
  analogWrite(10, intensidade);
}
void leitura() {
  variavel = digitalRead(5);
  if(variavel == 0) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
}

// analogRead(a_pino);
