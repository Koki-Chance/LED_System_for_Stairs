

void Roulette_Boost_digital(int x, int y, int z){      // 徐々に加速するRoulette
                                               // LEDの点灯が最上段から最下段まで完了すると
                                               // LEDの点灯速度が1段階上がる
                                               // x [回] = ルーレットの起動回数
                                               // y [ms] = ルーレットの速度
                                               // z [ms] = 速度上昇率
                                               // 指標値① Roulette_Boost(40, 400, 10);
  for(int i = 1; i <= x; i++) {
    
    digitalWrite(LED14, HIGH);
    delay(y);
    digitalWrite(LED14, LOW);
    delay(y);
    digitalWrite(LED13, HIGH);
    delay(y);
    digitalWrite(LED13, LOW);
    delay(y);
    digitalWrite(LED12, HIGH);
    delay(y);
    digitalWrite(LED12, LOW);
    delay(y);

    digitalWrite(LED11, HIGH);
    delay(y);
    digitalWrite(LED11, LOW);
    delay(y);
    digitalWrite(LED10, HIGH);
    delay(y);
    digitalWrite(LED10, LOW);
    delay(y);
    digitalWrite(LED9, HIGH);
    delay(y);
    digitalWrite(LED9, LOW);
    delay(y);
    digitalWrite(LED8, HIGH);
    delay(y);
    digitalWrite(LED8, LOW);
    delay(y);

    digitalWrite(LED7, HIGH);
    delay(y);
    digitalWrite(LED7, LOW);
    delay(y);
    digitalWrite(LED6, HIGH);
    delay(y);
    digitalWrite(LED6, LOW);
    delay(y);
    digitalWrite(LED5, HIGH);
    delay(y);
    digitalWrite(LED5, LOW);
    delay(y);
    digitalWrite(LED4, HIGH);
    delay(y);
    digitalWrite(LED4, LOW);
    delay(y);
    digitalWrite(LED3, HIGH);
    delay(y);
    digitalWrite(LED3, LOW);
    delay(y);
    digitalWrite(LED2, HIGH);
    delay(y);
    digitalWrite(LED2, LOW);
    delay(y);
    digitalWrite(LED1, HIGH);    
    delay(y);
    digitalWrite(LED1, LOW);
    delay(y);

    y = y - z;                // 速度をアップする
    
  }
}

