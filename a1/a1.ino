/*

a1

*/

int a = 2;

float x = 3.211225211212;

float t;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(a);
  Serial.println(x);
  Serial.println(a);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  t += .01;
  float y = sin(t);
  float y_r = t + random(-10, 10);
  Serial.print(-1);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" ");
  Serial.print(y_r);
  Serial.print(" ");
  Serial.println(1);
  delay(1000);

}
