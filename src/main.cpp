#include <Arduino.h>

#include "pins.h" // for pin declarations
#include "util.h" // for utility functions
#include "wifiUtil.h"

void setup()
{
  Serial.begin(115200);
  // print reason for rebooting (debugging)
  // Serial.println("System Reset: " + printBootReason());
  Serial.println("Setup begin");

  setupWifi(); // setup wifi to nftv2.local, sync ntp, enable OTA
  // set pinout
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // checkWifiStatus();
}