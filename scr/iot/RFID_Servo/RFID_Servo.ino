#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#include <ESP32Servo.h>

// RFID RC522 Pins for ESP32
#define SS_PIN    21
#define RST_PIN   22
#define SERVO_PIN 2

// Servo angles for MG90S
#define LOCKED_ANGLE   0
#define UNLOCKED_ANGLE 90

MFRC522 mfrc522(SS_PIN, RST_PIN);
Servo lockServo;

bool isLocked = true;

void setup() {
  Serial.begin(115200);
  
  // Setup servo
  lockServo.attach(SERVO_PIN);
  lockServo.write(LOCKED_ANGLE);
  
  SPI.begin();
  mfrc522.PCD_Init();
  
  Serial.println("RFID Lock Ready!");
  Serial.println("Scan your card...");
}

void loop() {
  // Check for new card
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }
  
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  
  // Print card UID
  Serial.print("Card detected! UID: ");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println();
  
  // Toggle lock
  isLocked = !isLocked;
  
  if (isLocked) {
    lockServo.write(LOCKED_ANGLE);
    Serial.println("🔒 LOCKED");
  } else {
    lockServo.write(UNLOCKED_ANGLE);
    Serial.println("🔓 UNLOCKED");
  }
  
  delay(2000);
  
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();
}