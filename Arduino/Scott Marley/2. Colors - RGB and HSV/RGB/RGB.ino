#include <FastLED.h>

#define NUM_LEDS  40
#define LED_PIN   13

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}

void loop() {
  
  for (int i = 0; i < NUM_LEDS; i++) {
    //leds[i] = CRGB(120, 255, 15);
    leds[i] = CRGB(i * 20, i * 10, i * 30);
  }
  
  FastLED.show();
}
