// pointerPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    double accountSam; 
    double accountSue; 
    cout << "What is Sam's account balance? $"; 
    cin >> accountSam; 
    cout << "What is Sue's account balance? $";
    cin >> accountSue; 

    double* pAccount = nullptr;
    double dinner; 
    double movie; 
    double iceCream;
    bool chivalry = true; 

    if (accountSam > accountSue) {
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
    *pAccount -= dinner; 
    
    cout << "\tMovie:     $";
    cin >> movie; 
    *pAccount -= movie; 
    
    cout << "\tIce Cream: $";
    cin >> iceCream; 
    *pAccount -= iceCream; 

    cout << endl; 
    if (chivalry) {
        cout << "Account Sam: $" << fixed << setprecision(2) << *pAccount << endl;
        cout << "Account Sue: $" << fixed << setprecision(2) << accountSue << endl;
    }

    else {
        cout << "Account Sam: $" << setprecision(2) << accountSam << endl;
        cout << "Account Sue: $" << setprecision(2) << *pAccount << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
