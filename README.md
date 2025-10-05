# 💰 Simple C++ Banking App

A console-based banking system written in C++.  
It allows a user to:
- Login with a PIN  
- Check account balance  
- Withdraw money  
- Exit the system  

## 🛠️ How to Run

### Option 1: Compile Manually
```bash
g++ src/main.cpp -o banking-app
./banking-app
```

### Option 2: Use CMake
```bash
mkdir build
cd build
cmake ..
cmake --build .
./BankingApp
```

## 📋 Example Output
```
Please Enter Your Pin: 1234
Welcome to your banking app!

1. Check Balance
2. Withdraw
3. Exit
Please Select Your Option Number: 1
Your Balance: R1237.45
```
