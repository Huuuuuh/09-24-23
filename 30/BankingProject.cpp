#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){

    int option = 0;
    double balance = 0;
    do{
        cout << "*************************" << endl;
        cout << "Please select an option: " << endl;
        cout << "1. Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "*************************" << endl;
        cin >> option;

        cin.clear();                // This will reset any error flags when the standard input fails to interpret the input
        fflush(stdin);              // This will clear the input buffer

        switch (option){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                    showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                break;
            case 4: cout << "Have a good day!" << endl;
                break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (option != 4);
    return 0;
}

void showBalance(double balance){
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << endl;
}

double deposit(){
    double amount = 0;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        cout << "That's not a valid amount!" << endl;
    }
    return 0;
}

double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawn: $";
    cin >> amount;

    if(amount > balance){
        cout << "Insufficient funds!" << endl;
    }
    else if(amount < 0){
        cout << "Invalid resquest"<< endl;
    }
    else{
        return amount;
    }
    return 0;
}