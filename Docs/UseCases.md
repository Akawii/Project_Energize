# Use Cases

## For the User

---

### **Use Case: Account Creation**
**Primary Actor:** User  
**Goal:** Create an account to access the app and manage bike storage reservations.  

**Main Flow:**
1. The user selects the **“Create Account”** option.  
2. The system requests an email and a password.  
3. The user enters the required information.  
4. The system validates the data and registers the new account.  
5. The system displays a welcome message or sends a confirmation email.  

**Alternative Flow:**
- If the email is already registered, the system notifies the user and suggests logging in.  
- If the password is weak, the system suggests creating a stronger one.  

---

### **Use Case: Login to the Application**
**Primary Actor:** User  
**Goal:** Access the application to manage reservations and payments.  

**Main Flow:**
1. The user enters their email and password.  
2. The system verifies the credentials.  
3. If the credentials are correct, the user is redirected to the main page (locker map).  

**Alternative Flow:**
- If the credentials are invalid, the system displays an error message.  
- If the user forgets the password, they can request a reset link via email.  

---

### **Use Case: Locker Reservation**
**Primary Actor:** User  
**Goal:** Reserve a locker to ensure availability before arriving.  

**Main Flow:**
1. The user selects a locker location on the map.  
2. The system shows available lockers in that location.  
3. The user chooses a locker and selects **“Reserve”**.  
4. The system confirms the reservation and starts a countdown timer (up to 15 minutes).  

**Alternative Flow:**
- If the locker is already reserved, the system displays a message and suggests another one.  
- If the user does not arrive within 15 minutes, the reservation automatically expires.  

---

### **Use Case: Locker Access (NFC/RFID)**
**Primary Actor:** User  
**Goal:** Unlock a locker using NFC/RFID to store or retrieve the bike.  

**Main Flow:**
1. The user approaches the reserved locker.  
2. The app generates an NFC/RFID access code.  
3. The user taps their phone or card on the reader.  
4. The system validates the code and unlocks the locker.  
5. The locker status updates to “Occupied.”  

**Alternative Flow:**
- If the code is invalid or expired, the system denies access and shows an error message.  

---

### **Use Case: Payment for Locker Use**
**Primary Actor:** User  
**Goal:** Complete payment for locker use.  

**Main Flow:**
1. The user selects **“Make Payment”** in the app.  
2. The system shows the total price and available payment methods.  
3. The user selects a method and confirms the payment.  
4. The system processes the transaction and confirms payment success.  

**Alternative Flow:**
- If payment fails, the system displays an error and allows retrying.  
- If the user exceeds the reserved time, an extra fee is calculated and displayed before final confirmation.  

---

### **Use Case: Extra Time Notification and Charge**
**Primary Actor:** User  
**Goal:** Receive alerts when reservation time is ending or exceeded, and handle extra usage fees.  

**Main Flow:**
1. The system monitors the active reservation timer.  
2. When 5 minutes remain, the user receives a notification.  
3. When the reservation expires, another notification is sent.  
4. The user can extend the reservation directly from the app.  
5. If the user does not extend, the system charges for extra time automatically.  

**Alternative Flow:**
- If payment for the extra time fails, the system blocks new reservations until the balance is settled.  

---

### **Use Case: Check Locker Availability**
**Primary Actor:** User  
**Goal:** View which lockers are available nearby.  

**Main Flow:**
1. The user opens the map screen.  
2. The system displays all locker locations.  
3. Available lockers are shown in green; occupied ones in red.  
4. The user can select a location to view details or reserve.  

---

### **Use Case: View Bike Location**
**Primary Actor:** User  
**Goal:** Identify where the bike is stored within the locker.  

**Main Flow:**
1. The user opens the **“My Reservations”** section.  
2. The system displays locker ID and storage position.  
3. The user can tap to view details or directions to the locker.  

---

## For the Admin

---

### **Use Case: User Management**
**Primary Actor:** Admin  
**Goal:** Manage user accounts in the system.  

**Main Flow:**
1. The admin logs into the admin dashboard.  
2. The system displays a list of all registered users.  
3. The admin can view, edit, or remove accounts.  

**Alternative Flow:**
- If a deletion request is made, the system asks for confirmation before removing the account.  

---

### **Use Case: Usage Statistics Analysis**
**Primary Actor:** Admin
**Goal:** Review system usage and identify trends.  

**Main Flow:**
1. The admin accesses the **Statistics Dashboard**.  
2. The system shows data such as locker usage frequency and active users.  
3. The admin filters data by date, location, or user activity.  
4. The admin uses this information to optimize locker distribution or maintenance schedules.  
