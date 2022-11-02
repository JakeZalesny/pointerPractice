#include <iostream>
#include <iomanip>
using namespace std;

class Account {
    double balance;

public:
    Account() {}

    Account(double balance) {
        this->balance = balance;
    }

    double getBalance() {
        return this->balance;
    }

    void setBalance(double balance) {
        this->balance = balance;
    }

    void addBalance(double amount) {
        this->balance += amount;
    }

    void subtractBalance(double amount) {
        this->balance -= amount;
    }
};

int main()
{
    Account accountSam;
    Account accountSue;

    cout << "What is Sam's account balance? $";
    double samBalance;
    cin >> samBalance;
    accountSam.setBalance(samBalance);

    cout << "What is Sue's account balance? $";
    double sueBalance;
    cin >> sueBalance;
    accountSue.setBalance(sueBalance);

    Account* pAccount = nullptr;
    double dinner;
    double movie;
    double iceCream;
    bool chivalry = true;

    if (accountSam.getBalance() > accountSue.getBalance()) {
        pAccount = &accountSam;
    }
    else
    {
        pAccount = &accountSue;
        chivalry = false;
    }

    cout << "\nCost of date: \n";
    cout << "\tDinner:    $";
    cin >> dinner;
    pAccount->subtractBalance(dinner);

    cout << "\tMovie:     $";
    cin >> movie;
    pAccount->subtractBalance(movie);

    cout << "\tIce Cream: $";
    cin >> iceCream;
    pAccount->subtractBalance(iceCream);

    cout << endl;
    cout << setprecision(2) << fixed;
    if (chivalry) {
        cout << "Account Sam: $" << fixed << setprecision(2) << pAccount->getBalance() << endl;
        cout << "Account Sue: $" << fixed << setprecision(2) << accountSue.getBalance() << endl;
    }

    else {
        cout << "Account Sam: $" << setprecision(2) << accountSam.getBalance() << endl;
        cout << "Account Sue: $" << setprecision(2) << pAccount->getBalance() << endl;
    }
}

