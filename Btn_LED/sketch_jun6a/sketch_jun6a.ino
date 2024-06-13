// Button LED use case with ARDUINO
// 《Arduino入門》第五篇：按鍵開關的使用
// reference: https://blog.jmaker.com.tw/arduino-buttons/

const int BUTTON_PIN = 7;  // 按鍵的接腳
const int LED_PIN =  3;   // LED燈的接腳

int buttonState = 0;   // 按鈕的狀態

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);   //設定LED的PIN腳為輸出
  pinMode(BUTTON_PIN, INPUT_PULLUP); //設定按鈕的接腳為輸入並且用到內建的上拉電阻，因為我們要讀取它的狀態
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello, Btn_LED exercise!!");

  buttonState = digitalRead(BUTTON_PIN);  //讀取按鍵的狀態

  if(buttonState == LOW){          //如果按鍵按了
    digitalWrite(LED_PIN, HIGH);   //LED就亮了 
  }else{                           //如果按鍵是未按下
    digitalWrite(LED_PIN, LOW);    //LED就不亮
  }
}
