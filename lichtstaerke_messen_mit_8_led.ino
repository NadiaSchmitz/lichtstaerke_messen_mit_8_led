int entry = A0;
int leds_blue[] = {2,3,4,5,6,7,8,9};
int led_blue_value;

void setup() {
  Serial.begin(9600);
  pinMode(leds_blue[0], OUTPUT);
  pinMode(leds_blue[1], OUTPUT);
  pinMode(leds_blue[2], OUTPUT);
  pinMode(leds_blue[3], OUTPUT);
  pinMode(leds_blue[4], OUTPUT);
  pinMode(leds_blue[5], OUTPUT);
  pinMode(leds_blue[6], OUTPUT);
  pinMode(leds_blue[7], OUTPUT);
}

void loop() {
  
  led_blue_value = analogRead(entry);
  Serial.println("Sensorwert: ");
  Serial.println(led_blue_value);
  if (led_blue_value > 700) {
    for (int i = 0; i < 8; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  } else if (led_blue_value > 600) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  } else if (led_blue_value > 500) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  } else if (led_blue_value > 400) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  } else if (led_blue_value > 300) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  } else if (led_blue_value > 200) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  } else if (led_blue_value > 0) {
    for (int i = 0; i < 2; i++) {
      digitalWrite(leds_blue[i], HIGH);
      delay(200);
      digitalWrite(leds_blue[i], LOW);
    }
  }
  
  delay(1000);
  
}
