#include "DigiKeyboard.h"

void setup() {
  // Wait for the system to recognize the device
  DigiKeyboard.delay(5000);

  // Open the terminal using Ctrl + Alt + T
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT); // Ctrl + Alt + T
  DigiKeyboard.delay(1000);

  // Type and execute the neofetch command
  DigiKeyboard.print("neofetch");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // nothing to do here
}
