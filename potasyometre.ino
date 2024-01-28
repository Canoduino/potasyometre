#define potpin A0
int veri;

void setup() {
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}
void loop() {
 veri = analogRead(potpin);
 Serial.println(veri);

}
