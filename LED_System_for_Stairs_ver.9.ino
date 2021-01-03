
/**********************************
 * LED_System_for_Stairs_ver.9
 * 
 * このプログラムは階段のLED点灯用プログラムである。
 * 
 * update 2018-11-11
 * 1. 1階の超音波センサーの反応が悪いため while文 で記述した
 * 
 * 
 * ＜ピン配置＞
 * D2 : LED3
 * D3 : LED4
 * D4 : LED5
 * D5 : 
 * D6 : 
 * D7 : 
 * D8 : 
 * D9 : 
 * D10 : 
 * D11 : 
 * D12 : 
 * D13 : LED14
 * A0 : 超音波センサ(trigPin)
 * A1 : 超音波センサ(echoPin)
 * A2 : PIRセンサ(2階)
 * A3 : 光センサ
 * A4 : LED1
 * A5 : LED2
 * 
 ***********************************/

const int LED1 = A4;
const int LED2 = A5;
const int LED3 = 2;
const int LED4 = 3;
const int LED5 = 4;
const int LED6 = 5;
const int LED7 = 6;
const int LED8 = 7;
const int LED9 = 8;
const int LED10 = 9;
const int LED11 = 10;
const int LED12 = 11;
const int LED13 = 12;
const int LED14 = 13;

int trigPin = A0;
int echoPin = A1;
long duration;
long distance;
const int Distance_threshold = 65;       // 超音波センサーが物体を検知する範囲(センシティビティ)

int PIR_Sensor = A2;
//int PIR;
const int PIR_threshold = 500;           // PIRセンサの出力値の閾値

int Light_Sensor = A3;
//int Light;
const int Light_threshold = 150;         //

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
  pinMode(LED10,OUTPUT);
  pinMode(LED11,OUTPUT);
  pinMode(LED12,OUTPUT);
  pinMode(LED13,OUTPUT);
  pinMode(LED14,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin, INPUT);
//  Serial.begin(9600);
}





void loop() 
{
  while(1)
  {
  delay(80);
  if( analogRead(Light_Sensor) <= Light_threshold )                 // Lightの値が200以下の時(夕暮れ時)にプログラムを始動する
  {
    Ultrasonic_Measuring();        // 超音波センサによる距離計測プログラムを作動する
    PIR = analogRead(PIR_Sensor);
    if( distance <= Distance_threshold && distance != 0 )
    {
      Heaven_UP(1, 100, 1000);
      All_ON();
      for (int i; i <= 200; i++)
      {
        if( analogRead(PIR_Sensor) >= PIR_threshold )
        {
          delay(3000);
          goto label1;
        }
        delay(100);
      }
      label1:
      All_OFF();
      delay(500);
      All_ON();
      delay(500);
      All_OFF();
      delay(500);
      All_ON();
      delay(500);
      All_OFF();
      delay(3000);  // あまりすぐにプログラムを再起動してしまうとセンサーに入った入力がライトを点灯させてしまい
                    // 誰もいないのにライトが点灯するという問題が発生する。それを防ぐために数秒待機時間を作る。

    
    } 
    else if( analogRead(PIR_Sensor) >= PIR_threshold )
    {
      Serial.print( "PIR：" );
      Serial.println( analogRead(PIR_Sensor) );
      Heaven_DOWN(1, 400, 1000);
      All_ON();
      for (int i; i <= 360; i++)    // i はLED点灯中における超音波センサの作動時間[秒]と一致する。
      {      
        Ultrasonic_Measuring();
        Serial.print("distance:");
        Serial.println(distance);
        if ( distance <= Distance_threshold && distance != 0 )
        {
          delay(1000);
          goto label2;
        }
        delay(50);
      }
        label2:
        delay(1000);
        All_OFF();
        delay(500);
        All_ON();
        delay(500);
        All_OFF();
        delay(500);
        All_ON();
        delay(500);
        All_OFF();
        delay(200);  // すぐに次の処理に映らないようにするための待機時間
      }
  }      
  }  
}






//////////////////////////////////////////////////////////////////////////////////

