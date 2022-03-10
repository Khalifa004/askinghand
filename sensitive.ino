#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>


float X, Y, Z;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
 
}

void loop() {
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();

Serial.print("X: ");
  Serial.print(X);
  Serial.print("  Y: ");
  Serial.print(Y);
  Serial.print("  Z: ");
  Serial.println(Z);


  if (Y > 1) {

    // put your main code here, to run repeatedly:
    CircuitPlayground.playTone(500, 100);
    CircuitPlayground.setPixelColor(0, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(1, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(2, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(3, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(4, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(5, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(6, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(7, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(8, 0,   255,   0);
    delay(50);
    CircuitPlayground.setPixelColor(9, 0,   255,   0);
    delay(50);
  }

  else {
     CircuitPlayground.setPixelColor(0, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(1, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(2, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(3, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(4, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(5, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(6, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(7, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(8, 255,   0,   0);
    delay(50);
    CircuitPlayground.setPixelColor(9, 255,   0,   0);
    delay(50);
  }
}
