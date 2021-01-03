

void Turn_OFF_UP(int x){         // x = 消灯速度
  digitalWrite(LED1,LOW);        // 高速消灯 : Turn_OFF_UP(20);
  delay(x);                      // 低速消灯 : Turn_OFF_UP(300);
  digitalWrite(LED2,LOW);
  delay(x);
  digitalWrite(LED3,LOW);
  delay(x);
  digitalWrite(LED4,LOW);
  delay(x);
  digitalWrite(LED5,LOW);
  delay(x);
  digitalWrite(LED6,LOW);
  delay(x);
  digitalWrite(LED7,LOW);
  delay(x);
  digitalWrite(LED8,LOW);
  delay(x);
  digitalWrite(LED9,LOW);
  delay(x);
  digitalWrite(LED10,LOW);
  delay(x);
  digitalWrite(LED11,LOW);
  delay(x);
  digitalWrite(LED12,LOW);
  delay(x);
  digitalWrite(LED13,LOW);
  delay(x);
  digitalWrite(LED14,LOW);
  delay(x);
}
