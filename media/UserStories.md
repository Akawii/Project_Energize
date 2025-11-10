# User Stories

---

## User Interactions

### Account Creation
**As a user**, I want to create an account in the app, so I can access my profile and use the bike storage services.

**Criteria:**
- The user can register using an email and password.  
- The app should validate that the email is unique and doesn’t allow multiple accounts.  
- The user is automatically logged in after successful registration.

---

### Login
**As a user**, I want to log into my account, so I can manage my reservations and view my locker history.

**Criteria:**
- The user can log in using a valid email and password.  
- The system displays an error message if the credentials are incorrect.  
- After login, the user is redirected to the home screen.

---

### Locker Reservation
**As a user**, I want to be able to reserve a locker up to 15 minutes before arriving, so I can have a space available when I arrive.

**Criteria:**
- The user can select a locker and reserve it up to 15 minutes in advance.  
- The app confirms the reservation and shows a countdown timer.  
- If the user doesn’t arrive within the time, the reservation expires automatically.

---

### Locker Access
**As a user**, I want to unlock a locker with my device, so I can securely store/retrieve my bike.

**Criteria:**
- The app generates an NFC/RFID code when the locker is available.  
- The locker opens only when the code is validated.  
- The locker status changes to “occupied” after successful access.

---

### Locker Availability
**As a user**, I want to check which lockers are available in my area, so I can plan where to store my bike.

**Criteria:**
- The app displays all lockers on a map.  
- Available lockers are shown in green; occupied ones in red.  
- The user can filter lockers by location.

---

### Map View
**As a user**, I want to view a map with all locker locations, so I can find the nearest one.

**Criteria:**
- The map updates in real time.  
- The user can move around the map.  
- The user can view all locker details and reserve it.

---

### Bike Location
**As a user**, I want to see where my bike is stored inside the locker, so I can easily find it later.

**Criteria:**
- The app shows the locker ID and location of the bike.  
- The locker ID is displayed in the user’s active reservation section.

---

### Payments
**As a user**, I want to make payments through the app, so I can complete my reservations easily.

**Criteria:**
- The user can choose a payment method.  
- The app confirms successful payment.  
- The user can check their payment history.

---

### Extra Time Notification & Charge
**As a user**, I want to be automatically notified if I exceed my reserved time or if my timer is running out, so I can extend my reservation and continue using the locker without interruptions.

**Criteria:**
- The app sends a notification when there are 5 minutes left in the reservation.  
- The app sends another notification when the reservation time expires.  
- The user can choose to extend the reservation directly from the notification or app screen.  
- If the user does not extend the time, the system automatically applies the extra usage fee.  
- The app displays the updated total payment after the extension or extra charge.

---

## Admin Interactions

### Usage Statistics
**As an admin**, I want to see how often lockers are used, so I can monitor system performance.

**Criteria:**
- The admin dashboard shows usage frequency per locker.  
- Data is updated automatically in real time.  
- The admin can filter data.

---

### Location Analytics
**As an admin**, I want to view the most and least used locker locations, so I can optimize placement and capacity.

**Criteria:**
- The admin dashboard shows a chart with usage by location.  
- The admin can export the analytics report.  
- The data updates with user activity.
