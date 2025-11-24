#include <WiFi.h>
#include <ESP32Servo.h>
#include <WebServer.h>

#define SERVO_PIN 13
Servo lockServo;

// Wi-Fi credentials
const char* ssid = "PC-LIZZARDO-VEN";
const char* password = "6525R8&x";

// HTTP server on port 80
WebServer server(80);

// Function to move the servo and simulate unlocking
void unlockDoor() {
  Serial.println("Unlock command received");

  // Move servo to unlock position
  lockServo.write(90);
  delay(500);

  // Simulate door opening
  Serial.println("Opening door...");
  delay(2000);
  Serial.println("Door opened!");

  // Return servo to locked position
  lockServo.write(0);
  Serial.println("Servo returned to lock position.");
}

// HTTP POST handler
void handleUnlock() {
  if (server.method() == HTTP_POST) {
    unlockDoor();
    server.send(200, "text/plain", "Unlocked");
  } else {
    server.send(405, "text/plain", "Method Not Allowed");
  }
}

void setup() {
  Serial.begin(115200);
  lockServo.attach(SERVO_PIN);
  lockServo.write(0);

  // Connect to Wi-Fi
  Serial.print("Connecting to Wi-Fi");
  WiFi.begin(ssid, password);
  int retries = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    retries++;
    if (retries > 40) { // ~20s timeout
      Serial.println("\nFailed to connect to Wi-Fi!");
      return;
    }
  }
  Serial.println("\nConnected to Wi-Fi!");
  Serial.print("ESP32 IP address: ");
  Serial.println(WiFi.localIP());  // Use this IP in your app

  // Setup HTTP route
  server.on("/unlock", HTTP_POST, handleUnlock);
  server.begin();
  Serial.println("HTTP server started. Listening for unlock commands...");
}

void loop() {
  server.handleClient(); // Handle incoming HTTP requests
}
