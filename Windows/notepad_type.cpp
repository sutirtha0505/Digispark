#include "DigiKeyboard.h"

void setup() {
  // Wait for the system to recognize the device
  DigiKeyboard.delay(10000);

  // Open Notepad
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Windows + R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Write the message
  DigiKeyboard.print("Hello, A message from Tirtharaj Karmakar.");
}

void loop() {
  // nothing to do here
}
