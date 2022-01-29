#ifndef __ESPMatto_h
#define __ESPMatto_h

#include "Arduino.h"
#include <ESP8266WiFi.h>

//TODO: add MQTT support

class ESPMatto {
	private:
		String wifiSSID;
		String wifiPass;

		int connectionTimeout;
	public:
		ESPMatto(string wifiSSID, string wifiPass);
		void setTimeout(int newTimeout);
		int setupWiFi();
	
}
