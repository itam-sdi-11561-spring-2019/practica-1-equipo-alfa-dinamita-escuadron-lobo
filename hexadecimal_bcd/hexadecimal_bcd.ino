int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 6;
int pinE = 7;
int pinF = 8;
int pinG = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    Serial.println("Entrar un número hexadecimal:");
    int num = Serial.read();
    if((num >= 97 && num <= 102) || (num >= 48 && num <= 57))
    {
      switch(num)
      {
        case 48:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, LOW);
          break;
        case 49:
          digitalWrite(pinA, LOW);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, LOW);
          digitalWrite(pinG, LOW);
          break;
        case 50:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, LOW);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, LOW);
          digitalWrite(pinG, HIGH);
          break;
        case 51:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, LOW);
          digitalWrite(pinG, HIGH);
          break;
        case 52:
          digitalWrite(pinA, LOW);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 53:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, LOW);//
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, LOW);//
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 54:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, LOW);//
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 55:
          digitalWrite(pinA, HIGH);//
          digitalWrite(pinB, HIGH);//
          digitalWrite(pinC, HIGH);//
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, LOW);
          digitalWrite(pinG, LOW);
          break;
        case 56:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 57:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 97:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 98:
          digitalWrite(pinA, LOW);
          digitalWrite(pinB, LOW);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        case 99:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, LOW);//
          digitalWrite(pinC, LOW);//
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, LOW);//
          break;
        case 100:
          digitalWrite(pinA, LOW);//
          digitalWrite(pinB, HIGH);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, LOW);//
          digitalWrite(pinG, HIGH);
          break;
        case 101:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, LOW);//
          digitalWrite(pinC, LOW);//
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
        default:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, LOW);//
          digitalWrite(pinC, LOW);//
          digitalWrite(pinD, LOW);//
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          break;
      }
    }
    else
    {
      Serial.println("No se puede representar como hexadecimal...");
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
    }
  }
}
