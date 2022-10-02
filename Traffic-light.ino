/*
  Copyright 2022 javavirys

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  blinkRed();
  blinkYellow(false);
  blinkGreen();
  blinkYellow(true);
}

void blinkYellow(bool reverse) {
  for(int i = 1; i < 5; i++) {
    digitalWrite(11, i == 1 && !reverse ? HIGH : LOW);
    digitalWrite(LED_BUILTIN, i == 1 && reverse ? HIGH : LOW);
    digitalWrite(12, i % 2 ? HIGH : LOW);
    delay(1000);
  }
}

void blinkGreen() {
  digitalWrite(11, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW);
  delay(4000);
}

void blinkRed() {
  digitalWrite(11, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, LOW);
  delay(3000);
} 
