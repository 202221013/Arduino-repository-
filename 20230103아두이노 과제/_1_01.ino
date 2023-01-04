// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); //핀의 모드를 설정한다. 13번 핀을 출력으로 설정
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); //13번 핀의 출력을 HIGH
   Serial.println("LED ON");
  delay(2000); // Wait for 1000 millisecond(s)
 
  digitalWrite(LED_BUILTIN, LOW); //13번의 핀의 출력을 LOW
    Serial.println("LED OFF"); 
  delay(2000); // Wait for 1000 millisecond(s)
 
}