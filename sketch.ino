//https://wokwi.com/projects/345894220909773394
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int POTValue = analogRead(A0);
  Serial.println(POTValue);
  if (POTValue == 0){
    digitalWrite(13, LOW);
  }
  else if (POTValue > 0 && POTValue < 200){
    digitalWrite(13, HIGH);
    delay(250);
    digitalWrite(13, LOW);
    delay(250);
  }
  else if (POTValue > 200 && POTValue < 400){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  else if (POTValue > 400 && POTValue < 600){
    digitalWrite(13, HIGH);
    delay(150);
    digitalWrite(13, LOW);
    delay(150);
  }
  else if (POTValue > 600 && POTValue < 800){
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
  }
  else if (POTValue > 800 && POTValue < 1000){
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
    delay(50);
  }
  else if (POTValue > 1000){
    digitalWrite(13, HIGH);
  }
}
