#include <iostream>

int main() {
    int userpin = 1234;
    int useroption;
    double balance = 1237.45;
    double withdraw_amount = 0;
    bool login = false;
    bool home = true;

    for (int attempt = 3; attempt != 0; attempt--) {
        std::cout << "Please Enter Your Pin: ";
        std::cin >> useroption;
        if (useroption != userpin) {
            std::cout << "Incorrect Pin!\n";
            std::cout << "You have " << attempt - 1 << " attempts\n";
            login = false;
            continue;
        } else {
            login = true;
            break;
        }
    }

    if (!login) {
        std::cout << "You have reached your max attempts";
        return 0;
    }

    while (home) {
        std::cout << "\nWelcome to your banking app!\n\n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Exit\n\n";
        std::cout << "Please Select Your Option Number: ";
        std::cin >> useroption;

        if (useroption == 1) {
            std::cout << "Your Balance: R" << balance << "\n";
        } 
        else if (useroption == 2) {
            std::cout << "Your Balance: R" << balance << "\n";
            std::cout << "How much would you like to withdraw?\nR";
            std::cin >> withdraw_amount;
            if (withdraw_amount > balance) {
                std::cout << "You have insufficient funds!\n";
            } else {
                balance -= withdraw_amount;
                std::cout << "Your request was successful\n";
                std::cout << "Your Balance: R" << balance << "\n";
            }
        } 
        else if (useroption == 3) {
            std::cout << "Thank you for banking with us!\n";
            home = false;
        } 
        else {
            std::cout << "Please select a valid option!\n";
        }
    }

    return 0;
}
