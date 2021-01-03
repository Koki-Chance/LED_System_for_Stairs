void UP_ON(int x, int y){          // x は点灯完了までの時間, y は点灯継続時間
  digitalWrite(LED1,HIGH);   // 例 UP_ON(300, 10000); (0.3秒経つと次のLEDが点灯する)
  delay(x);
  digitalWrite(LED2,HIGH);
  delay(x);
  digitalWrite(LED3,HIGH);
  delay(x);
  digitalWrite(LED4,HIGH);
  delay(x);
  digitalWrite(LED5,HIGH);
  delay(x);
  digitalWrite(LED6,HIGH);
  delay(x);
  digitalWrite(LED7,HIGH);
  delay(x);
  digitalWrite(LED8,HIGH);
  delay(x);
  digitalWrite(LED9,HIGH);
  delay(x);
  digitalWrite(LED10,HIGH);
  delay(x);
  digitalWrite(LED11,HIGH);
  delay(x);
  digitalWrite(LED12,HIGH);
  delay(x);
  digitalWrite(LED13,HIGH);
  delay(x);
  digitalWrite(LED14,HIGH);
  delay(x);

  delay(y);
  All_OFF();
}
