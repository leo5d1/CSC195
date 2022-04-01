// PrimitiveDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string name;
    char initial;
    unsigned int age;
    bool isAdult;
    unsigned int zipcode;
    float wage;
    unsigned int daysWorked;
    unsigned int hoursWorkedPerDay[7];
    unsigned int totalHours = 0;
    unsigned int grossIncome;
    unsigned int netIncome;

    const float TAX = 0.1f;

    cout << "enter first name: ";
    cin >> name;
    
    cout << "enter last initial: ";
    cin >> initial;

    cout << "enter age: ";
    cin >> age;
    if (age >= 18) isAdult = 1;
    else isAdult = 0;
    
    cout << "enter zipcode: ";
    cin >> zipcode;

    cout << "enter wage: $";
    cin >> wage;

    cout << "enter days worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "enter hours worked for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
    }

    for (int i = 0; i < daysWorked; i++)
    {
        totalHours += hoursWorkedPerDay[i];
    }

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX);

    cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n";
    cout << "gross income: $" << grossIncome << "\n";
    cout << "net income: $" << netIncome;
}