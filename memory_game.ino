#define red 13 
#define blue 12 
#define yellow 8 
#define green 7
#define white 4

int leds[] = {4, 7, 8, 12, 13};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);  
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int rnd = random(0,5);
digitalWrite(leds[rnd], HIGH); 
delay(500);
digitalWrite(leds[rnd], LOW); 
delay(100);

}
