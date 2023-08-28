# ESP32-Base-Project

This is a starter template for any future ESP32 projects.  

# Features
1. WIFI - Wifi functionality is built in.  Just create a config.h file with the following:
```
#define WIFI_SSID     XXXXXX
#define WIFI_PASSWORD XXXXXX
#define MDNS_NAME     XXXXXX
```
-  WIFI_SSID is the name of your Wifi network
-  WIFI_PASSWORD is the password
- MDNS_NAME is how you would like to access the web server of your ESP32.  For example, if you use "esp32", then you can access the webserver via http://esp32.local
2. NTP Sync - Automatically configured to sync to NTP server at 4am daily.  Modify UTC_OFFSET_IN_SECONDS and NTP_SYNC_HOUR to change your local time and the daily time that NTP syncs.
