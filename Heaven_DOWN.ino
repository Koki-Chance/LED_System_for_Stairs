

void Heaven_DOWN(int x, int y, int z){   // 例) 低速点灯(1回) Heaven_DOWN(1, 80, 10000);
                                         //     高速点灯(10回) Heaven_DOWN(10, 30, 10000);
  for ( int i = 1; i <= x; i++ ){       
    digitalWrite(LED14,HIGH);
    delay(y);
    digitalWrite(LED13,HIGH);
    delay(y);
    digitalWrite(LED12,HIGH);
    delay(y);
    digitalWrite(LED11,HIGH);
    delay(y);
    digitalWrite(LED10,HIGH);
    delay(y);
    digitalWrite(LED9,HIGH);
    delay(y);
    digitalWrite(LED8,HIGH);
    delay(y);
    digitalWrite(LED7,HIGH);
    delay(y);
    digitalWrite(LED6,HIGH);
    delay(y);
    digitalWrite(LED5,HIGH);
    delay(y);
    digitalWrite(LED4,HIGH);
    delay(y);
    digitalWrite(LED3,HIGH);
    delay(y);
    digitalWrite(LED2,HIGH);
    delay(y);
    digitalWrite(LED1,HIGH);
    delay(y);
    All_OFF();
  }

    All_ON();
    delay(z);
//    All_OFF();
  
}
