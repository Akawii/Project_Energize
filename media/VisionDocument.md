#Vision Document

## 1. Objective

The main goal of this project is to design and develop an intelligent **Bike Storage Application** that integrates IoT, Artificial Intelligence, and automation to improve urban mobility and bicycle safety.  
The system allows users to reserve, access, and pay for locker storage through a mobile app, while providing administrators with usage analytics and system monitoring.

---

## 2. Vision

The **Smart Bike Storage System** aims to simplify and secure the way cyclists store their bicycles in public or private environments.  
It combines **IoT sensors, NFC/RFID access, and AI-based usage analysis** to create a seamless, automated experience for both users and administrators.

### The system can be applied in several environments:
- **Urban Mobility Stations:** Providing secure storage for daily commuters in public transport hubs.  
- **Universities & Campuses:** Offering students a safe way to store their bicycles while attending classes.  
- **Corporate Buildings:** Allowing employees to easily park and store bicycles during work hours.  
- **Residential Areas:** Providing secure, automated bicycle lockers for apartment complexes or residential communities.

---

## 3. Stakeholders

**End Users** | Individuals who use the mobile application to reserve and access bike lockers. 
**Admin** | Responsible for managing the system, monitoring usage data, and maintaining lockers. 
**Dev Team** | Responsible for building, integrating, and maintaining the app, IoT devices, and AI systems. 
**Maintenance** | Manage on-site locker systems, ensure hardware and sensors function correctly. 

---

## 4. Project Team

### 4.1 Development Team Roles
- **Frontend Dev:** Responsible for the mobile interface, developed with **????** for Android.  
- **Backend Dev:** Implements the application logic, APIs, and server communication using ????.  
- **IoT:** Integrates locker sensors, NFC/RFID modules, and communication protocols using **ESP32**.  
- **AI Dev:** Builds AI models for **usage prediction, dynamic pricing, and fault detection**.  
- **Automatic Learning:** Implements **machine learning algorithms** to detect user behavior patterns and optimize locker distribution.  
- **Unity Dev:** Develops an interactive **Back Office Dashboard** using **Unity**.  
- **Graphic Designer:** Designs the app interface, icons, and overall visual identity.   
- **Testers:** Validate all features and ensure system stability before deployment.

---

## 5. System Features

### 5.1 Core Functionalities

#### **User Features**
- **Account Creation & Login:** Register and authenticate using email and password.  
- **Locker Reservation:** Reserve lockers in advance (up to 15 minutes before arrival).  
- **Real-Time Availability Map:** View locker availability in different zones.  
- **NFC/RFID Access:** Unlock lockers automatically using phone-generated NFC codes.  
- **Payment System:** Secure in-app payments with automatic extra-time billing.  
- **Notifications:** Alerts for approaching reservation expiration or extra time charges.  
- **Bike Location Tracking:** Display the exact locker and compartment where the bike is stored.

#### **Admin Features**
- **Locker Usage Analytics:** View statistics on locker usage frequency and occupancy rates.  
- **Zone Optimization:** AI-based suggestions for expanding or relocating locker zones.  
- **User Management:** Manage registered users and monitor usage activity.  
- **Back Office Interface:** Visual representation of lockers and their statuses in Unity.

---

### 5.2 Advanced Features (Optional)
- **Predictive Locker Allocation:** AI recommends the best locker based on historical usage patterns.  
- **Dynamic Pricing:** Machine learning automatically adjusts pricing during peak hours.  
- **Maintenance Alerts:** IoT sensors detect hardware faults (door issues, power loss, etc.) and notify administrators.  
- **Data Visualization Dashboard:** Real-time data display of locker usage in Unity.  
- **Offline Mode:** Limited local access when internet connectivity is unavailable.

---

## 6. Reference Architecture

The system follows a **modular architecture** with four key components:

**Frontend (Mobile App)** - Built for Android, providing the user interface and interaction logic. 
**Backend (API & Server)** - Developed with ????, connecting mobile clients, databases, and IoT devices. 
**Database** - Storing user data, locker states, transactions, and usage history.
**IoT Layer** - ESP32-based microcontrollers handle **locker sensors, RFID readers, and NFC integration**. 
**AI / Automatic Learning Layer** - Used for analytics, predictions, and optimization models. 
**Creative Programming (Unity)** - A **Back Office** built in **Unity**, visualizing lockers, users, and statistics interactively. 

---

## 7. Product Constraints

### 7.1 Identified Constraints
- **Performance:** May experience delays on older Android devices or when network latency is high.  
- **Connectivity:** Requires stable internet access for real-time reservations and payments.  
- **Hardware Limitations:** IoT devices depend on power and network availability.  
- **Compatibility:** Some NFC or RFID features may not work on older smartphones.  
- **AI Processing:** Predictive algorithms require additional computational resources for training and inference.

---

## 8. Integration of Advanced Technologies

### 8.1 Automatic Applied Learning
Implements **machine learning** models to:
- Predict locker demand and usage frequency.  
- Detect anomalies such as locker malfunctions or unauthorized access.  
- Optimize locker distribution across multiple zones.

### 8.2 Artificial Intelligence
- AI-based data analysis to support admin decision-making.  
- Intelligent pricing and recommendation systems.  
- Natural language chatbot assistance for user inquiries and support.

### 8.3 IoT Integration
- Real-time locker monitoring (open/closed state, temperature, occupancy).  
- RFID/NFC communication for access control.  
- Automatic sensor updates sent to the backend server.

### 8.4 Creative Programming (Unity Back Office)
- Visualization of locker zones, usage heatmaps, and alerts.  
- Interactive control panel for admins to view or simulate real-time operations.  
- Integration with backend data to reflect live locker states.

---

## 9. Summary

The **Smart Bike Storage App**, as known as **Energize** leverages modern technologies — **IoT, AI, Automatic Learning, and Creative Programming** — to deliver an innovative and efficient storage management solution.  
It enhances user convenience, improves operational insights for administrators, and contributes to smarter, more sustainable urban mobility systems.
