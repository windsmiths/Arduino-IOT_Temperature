#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "d4f50224-c273-4f2a-8b98-1ea643195c34";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)


float temperature;
bool button;
bool tilt;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(temperature, READ, 60 * SECONDS, NULL);
  ArduinoCloud.addProperty(button, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(tilt, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
