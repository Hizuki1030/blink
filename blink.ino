int ledPin = 25;

void setup() {
  // LEDピンを出力モードに設定
    pinMode(ledPin, OUTPUT);
    }

    void loop() {
      digitalWrite(ledPin, HIGH);   // LEDを点灯
        delay(1000);                  // 1秒間待機
	  digitalWrite(ledPin, LOW);    // LEDを消灯
	    delay(1000);                  // 1秒間待機
	    }
