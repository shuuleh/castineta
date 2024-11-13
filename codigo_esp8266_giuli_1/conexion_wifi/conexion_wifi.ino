#include <ESP8266WiFi.h>

const char* ssid = "El_impostor"; //define el ssid
const char* password = "lezca41926094";//define la clave de modem


  void setup() {  //aca se carga todo lo que ocurre una sola vez
    pinMode(LED_BUILTIN, OUTPUT);     //defino el led de la placa como una salida
    digitalWrite(LED_BUILTIN, HIGH);   // apago el led
    Serial.begin(115200);               //buaud rate del puerto serie
    Serial.println("\nWiFi station setting");   //muestra en monitor que se esta configurando la red
    WiFi.mode(WIFI_STA);      //WIFI_STA DEFINE QUE ES UN RECEPTOR
    WiFi.begin(ssid, password);
    Serial.print("Connecting... ");   //MENSAJE DE QUE ESTA CONECTANDO 
    while(WiFi.status() != WL_CONNECTED){
      delay(500);
    Serial.print(".") ;//linea de espera

    }

    Serial.println("\nWiFi ready"); //mensaje de que conecto!

      Serial.println("My ip address:");
    Serial.println(WiFi.localIP());
     if(WiFi.status() == WL_CONNECTED){
    digitalWrite(LED_BUILTIN, LOW);  // prende el led, (flag de que se conecto la red)
  delay(5000);                      // wait for a 5seg
  digitalWrite(LED_BUILTIN, HIGH);   // apago el led
  
  }

}

void loop() { //muestra en tiempo real la potencia de la señal
 int power = WiFi.RSSI();
  Serial.printf("Signal dB %d\n", power);
  delay(100);

}
