const int pinLED1 = 4;
const int pinLED2 = 5;
const int pinLED3 = 6;
const int pinLED4 = 7;
const int pinLED5 = 8;

const int Button_PIN = 2;

const int BUZZ_PIN = 3;

const int sensorHum = A0;

int analogPin = 3;
int val = 0;

bool activated = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(Button_PIN, INPUT);
  pinMode(BUZZ_PIN, OUTPUT);
  pinMode(sensorHum, INPUT);
  
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.print(digitalRead(Button_PIN));
  Serial.print(' ');
  
  val = analogRead(analogPin);
  
  if(digitalRead(Button_PIN)){
    
    tone(BUZZ_PIN, 100, 1000);
    delay(100);
    tone(BUZZ_PIN, 1000, 500);
    delay(500);
    }
  
  if (digitalRead(sensorHum) == HIGH == false){
    analogWrite(pinLED1, val / 1);
    analogWrite(pinLED2, val / 1);
    analogWrite(pinLED3, val / 1);
    analogWrite(pinLED4, val / 1);
    analogWrite(pinLED5, val / 1);
    activated = true;
  }
  delay(100);
}
