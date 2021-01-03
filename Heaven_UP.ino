

void Heaven_UP(int x, int y, int z){
  for(int i = 1; i <= x; i++){     // x = 繰り返し回数, y = 点灯速度, z = 点灯継続時間
    digitalWrite(LED1,HIGH);       // 例) 高速点灯 Heaven_UP(10, 20, 10000);
    delay(y);                      //     低速点灯 Heaven_UP(10, 80, 10000);
    digitalWrite(LED2,HIGH);       //
    delay(y);
    digitalWrite(LED3,HIGH);
    delay(y);
    digitalWrite(LED4,HIGH);
    delay(y);
    digitalWrite(LED5,HIGH);
    delay(y);
    digitalWrite(LED6,HIGH);
    delay(y);
    digitalWrite(LED7,HIGH);
    delay(y);
    digitalWrite(LED8,HIGH);
    delay(y);
    digitalWrite(LED9,HIGH);
    delay(y);
    digitalWrite(LED10,HIGH);
    delay(y);
    digitalWrite(LED11,HIGH);
    delay(y);
    digitalWrite(LED12,HIGH);
    delay(y);
    digitalWrite(LED13,HIGH);
    delay(y);
    digitalWrite(LED14,HIGH);
    delay(y);
    All_OFF();
  }

  All_ON();
  delay(z);
//  All_OFF();
}

