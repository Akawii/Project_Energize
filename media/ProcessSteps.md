# Process Steps 

## 1. User Registration & Authentication
1. User downloads the **Flutter app** and opens it.
2. User creates an account or logs in:
   - App sends credentials to **Backend (Node.js/PHP)**.
   - Backend verifies via **Firebase Auth**.
3. On success:
   - **JWT token** is issued to the app.
   - User session is established securely.

---

## 2. Locker Reservation
1. User checks available lockers on the app map.
2. App requests real-time locker availability from **Backend/Firebase**.
3. User selects a locker and makes a reservation (up to 15 minutes).
4. Backend updates **SQL database** and confirms reservation.
5. Notification scheduled via **Firebase Cloud Messaging** for reservation start/expiry.

---

## 3. Payment Processing
1. User initiates payment via app.
2. Backend communicates with **payment gateway**.
3. On success:
   - Transaction stored in SQL.
   - Reservation confirmed on ESP32.
4. On failure:
   - Reservation canceled.
   - User receives notification.

---

## 4. Locker Access via ESP32
1. User arrives at locker and taps **NFC/RFID card** or uses **Bluetooth token**.
2. ESP32 validates token:
   - Locally (offline cache) or via Backend (online).
3. If valid:
   - ESP32 unlocks locker using **servo motor or magnetic lock**.
   - Updates locker status in real-time to **Firebase/Backend**.
4. If invalid:
   - Access denied; user notified.
   - Optional buzzer/LED alert.

---

## 5. Sensor Monitoring (ESP32)
1. ESP32 continuously monitors:
   - Door open/closed status
   - Occupancy sensors
   - Tamper detection or forced entry
2. Sends real-time updates to **Backend/Firebase**.
3. Alerts triggered for abnormal behavior or maintenance needs.

---

## 6. IoT Communication
1. ESP32 uses **Wi-Fi (or Bluetooth)** for communication.
2. Supports **HTTPS, MQTT, or WebSockets** for secure, real-time data transfer.
3. Maintains offline functionality with **cached tokens** and local logs.

---

## 7. AI & Analytics Layer
1. Data from users, payments, and IoT sensors is processed via **Python / P5.js**:
   - Predict locker demand.
   - Dynamic pricing recommendations.
   - Detect anomalies or hardware issues.
2. Analytics reports sent to **Unity admin dashboard** for visualization and decision-making.

---

## 8. Admin Operations
1. Administrators log into **Unity dashboard**.
2. Real-time visualization of lockers in 3D:
   - Location, occupancy, status.
   - Maintenance alerts.
3. Admins can manage users, analyze data, and push OTA firmware updates to ESP32 devices.

---

## 9. Security & Fail-Safe
1. All communications encrypted (**HTTPS/AES**).
2. Session control via **JWT tokens**.
3. Time-limited NFC/RFID or Bluetooth tokens for secure access.
4. Local fallback access on ESP32 for network failure.
5. Logs stored in **SQL/Firebase** for auditing and troubleshooting.

---

## 10. OTA Firmware Updates
1. Admin pushes firmware updates via Backend.
2. ESP32 downloads updates over Wi-Fi and installs them automatically.
3. Ensures lockers always run the latest secure version.
