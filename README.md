# 🧩 SQL_Adaptor

A **C++ console demonstration** of the **Adaptor Design Pattern**, showing how two systems with different query interfaces can communicate seamlessly.  
This project simulates bridging a SQL-style backend with another system, demonstrating interface translation in a lightweight, educational way.

---

## ⚙️ Overview

The SQL_Adaptor project illustrates how an **adaptor class** can convert commands between incompatible systems.  
It does not connect to a real database — instead, it prints the simulated behavior to demonstrate the concept.  
This is ideal for learning **OOP principles**, design patterns, and modular system design.

---

## 💻 Features
- Demonstrates the **Adaptor Pattern** in C++  
- Simulates query translation between two systems  
- Console-based and lightweight  
- Provides example input/output for learning  

---

## 🧰 Tech Stack
- **Language:** C++ (C++17 recommended)  
- **Paradigm:** Object-Oriented Programming  
- **Design Pattern:** Adaptor  

---

## 🏗️ Build & Run

Ensure you have a C++ compiler installed (C++17 or newer recommended).

# Clone the repository
git clone https://github.com/ntando-beta/SQL_Adaptor.git
cd SQL_Adaptor

# Build the project using Makefile
make

# Run the demo
./SQL_Adaptor

---

## 🧠 Example Output
Sample output from running the program:

Executing MySQL query: SELECT * FROM users;
Adaptor converting query format...
Running command in secondary system: FetchAllUsers();
Query execution complete.

This demonstrates how an adaptor receives an SQL-style request, translates it, and executes it in another system.

---

## 📜 Concepts Demonstrated

- Adaptor Design Pattern
- Interface abstraction and translation
- Function delegation and modular architecture
- Reusability and clean code design

---

## 📜 License
Open-source under the MIT License.

---

## 👤 Author
**Ntando Mazibuko**  
GitHub: [@ntando-beta](https://github.com/ntando-beta)
