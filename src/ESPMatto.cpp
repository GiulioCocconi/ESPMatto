#include "ESPMatto.h"

EspMatto::EspMatto(string wifiSSID, string wifiPass) {
	this->wifiSSID = wifiSSID;
	this->wifiPass = wifiPass;
	
	this->connectionTimeout = 50;
}

void ESPMatto::setTimeout(int newTimeout) {
	this->connectionTimeout = newTimeout;
}

int ESPMatto::setupWiFi() {
	WiFi.begin(this->wifiSSID, this->wifiPass);
	delay(1000);

	for (int i = 0; WiFi.status() != WL_CONNECTED && i < this->connectionTimeout; i++) {
		delay(500);
	}

	if (WiFi.status() != WL_CONNECTED) {
		return -1;
	}
	
	return 0;
}
