#include <iostream>

using namespace std;

int main() {
    int PIN = 1234;
    int enteredPin;
    double balance = 1000.0;

    cout << "==== ATM ====" << endl;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != PIN) {
        cout << "Incorrect PIN.";
        return 0;
    }

    int choice;

    do {

        cout << "==== ATM MENU ====" << endl;
        cout    << "1. Check balance" << endl
                << "2. Deposit" << endl
                << "3. Withdraw" << endl
                << "4. Exit" << endl;
        cout << "==================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                double deposit;
                cout << "Enter the deposit amount: ";
                cin >> deposit;
                balance = balance + deposit;
                cout << "Deposit successful." << endl;
                cout << "Your new balance is: $" << balance << endl;
                break;
            case 3:
                double withdraw;
                cout << "Enter the withdraw amount: ";
                cin >> withdraw;

                if (withdraw > balance) {
                    cout << "Insufficient balance." << endl;
                } else {
                    balance = balance - withdraw;
                    cout << "Withdraw successful." << endl;
                    cout << "Your new balance is: $" << balance << endl;
                }

                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid option. \n";
                break;
        }
    }
    while (choice != 4);

    return 0;
}