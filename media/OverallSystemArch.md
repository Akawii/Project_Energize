## Overall System Architecture

The system is designed as a **multi-layered, IoT-driven, and AI-enhanced platform** that connects smart bike lockers, mobile applications, and an administrative back office.  
It ensures seamless interaction between **users**, **administrators**, and **physical locker hardware**, creating a secure, automated, and data-driven bike storage ecosystem.

---

### **1. Client Layer (Frontend Applications)**

#### **User Application – Flutter (Android Studio)**
- The mobile app allows users to:
  - Create and manage accounts  
  - Reserve lockers (up to 15 minutes in advance)  
  - Unlock lockers using NFC/RFID  
  - Make payments and receive notifications  
  - View real-time locker availability on a map  
- Developed in **Flutter**, ensuring a fast, responsive, cross-platform experience.  
- Communicates with backend services through **REST APIs**.

#### **Administrator Back Office – Unity**
- A **creative programming interface** built with **Unity**, used by administrators to:
  - Visualize locker locations and usage  
  - Monitor real-time locker states  
  - Manage users and analyze data  
  - Receive maintenance or sensor alerts  
- Serves as the control and analytics hub for system management.

---

###  **2. Application Layer (Backend Services)**

- Developed using **Node.js / PHP** (or compatible backend stack) for API routing and logic handling.  
- Handles communication between mobile clients, the Unity back office, IoT devices, and the database.  
- Main responsibilities:
  - Reservation management  
  - Authentication and session control  
  - Payment processing and billing  
  - Notification scheduling (for expiring reservations)  

---

###  **3. IoT Layer (Hardware Control)**

#### **Arduino Controllers (IDE / PlatformIO)**
- Each locker is equipped with an **Arduino microcontroller** connected to:
  - NFC/RFID readers for authentication  
  - Servo motors or magnetic locks for door control  
  - Sensors for locker occupancy and status  
- IoT devices send data via Wi-Fi or serial communication to the backend.  
- Developed and programmed in **Arduino IDE** or **Visual Studio Code (PlatformIO)**.

---

###  **4. Data Layer (Database and Cloud Storage)**

- **Firebase** is used for real-time data synchronization, user authentication, and cloud messaging.  
- **SQL** (MySQL or PostgreSQL) stores structured data such as:
  - Locker locations and IDs  
  - Reservation records  
  - Payment history  
  - Usage statistics  
- The hybrid database setup ensures both **speed (Firebase)** and **reliability (SQL)**.

---

###  **5. AI, Learning & Analytics Layer**

- Built using **P5.js** for data visualization and applied AI modules.  
- Implements:
  - Predictive analytics for locker demand  
  - Smart dynamic pricing and recommendation systems  
  - Detection of abnormal locker usage or hardware failure  
- Machine learning models continuously learn from user data and improve system efficiency.

---

###  **6. Security & Communication Layer**

- **Authentication:** Firebase Auth + JWT for secure sessions.  
- **Encryption:** HTTPS and AES encryption for sensitive data transfer.  
- **Access Control:** Time-limited NFC/RFID tokens ensure that only authorized users can open lockers.  
- **Fail-Safe Mechanisms:** Local access fallback if network connectivity fails.

---

###  **Architecture Summary**

| Layer | Technologies | Responsibilities |
|--------|---------------|------------------|
| **Frontend (Client App)** | Flutter (Android Studio) | User interface & reservation system |
| **Admin Back Office** | Unity | 3D visualization, management & analytics |
| **Backend** | Node.js / PHP | APIs, logic & data orchestration |
| **IoT Layer** | Arduino IDE / PlatformIO | Hardware control & sensor communication |
| **Database Layer** | Firebase / SQL | Data storage & real-time sync |
| **AI & Visualization** | P5.js | Predictions, reports & analytics |
| **Security Layer** | HTTPS / JWT / AES | Authentication & encryption |

---

###  **System Overview**
The **Energize** system integrates **IoT, AI, and cross-platform technologies** into a cohesive ecosystem:  
- **Users** interact through the **Flutter app**.  
- **IoT devices** (Arduino) handle physical locker operations.  
- **Firebase/SQL** synchronize and store system data.  
- **AI and analytics** modules process insights.  
- **Administrators** monitor everything via the **Unity back office**.

---

