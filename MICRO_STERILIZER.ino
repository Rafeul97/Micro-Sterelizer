//Micro Sterilizer 

#include "BluetoothSerial.h"
BluetoothSerial ESP_BT; //Object for Bluetooth

int incoming;
int LED = 2;

void setup() {
  Serial.begin(9600); //Start Serial monitor in 9600
  ESP_BT.begin("MICRO STERILIZER"); //Name of your Bluetooth Signal
  Serial.println("Bluetooth Device is Ready to Pair");

  pinMode (LED, OUTPUT);//Specify that LED pin is output
    
digitalWrite(LED, HIGH);
}

void loop() 
{
  
  if (ESP_BT.available()) //Check if we receive anything from Bluetooth
  {
    incoming = ESP_BT.read(); //Read what we recevive 
    Serial.print("Received:"); Serial.println(incoming);

    if (incoming == 65)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("UV turned ON for 10 Seconds");
delay(10000);
digitalWrite(LED, HIGH);
ESP_BT.println("Sanitized");
        }
        
          

   if (incoming == 66)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("UV turned ON for 20 Seconds");
delay(20000);
digitalWrite(LED, HIGH);
ESP_BT.println("Sanitized");
        }
        
      

   if (incoming == 67)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("UV turned ON for 30 Seconds");
delay(30000);
digitalWrite(LED, HIGH);
ESP_BT.println("Sanitized");
        }
        
   

    if (incoming == 68)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("UV turned ON for 40 Seconds");
delay(40000);
digitalWrite(LED, HIGH);
ESP_BT.println("Sanitized");
        }

if (incoming == 69)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("UV turned ON for 50 Seconds");
delay(50000);
digitalWrite(LED, HIGH);
ESP_BT.println("Sanitized");
        }

if (incoming == 70)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("UV turned ON for 1 Minute");
delay(60000);
digitalWrite(LED, HIGH);
ESP_BT.println("Sanitized");
        }
        
        
        
        
  }
  delay(20);
    
}