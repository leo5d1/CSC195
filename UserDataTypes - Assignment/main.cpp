// UserDataTypes - Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

int main()
{
    unsigned int employees[5];

    unsigned int numEmployees;
    std::cout << "number of employees: ";
    std::cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++)
    {
        Employee Read();
    }

    for (int i = 0; i < numEmployees; i++)
    {
        Employee Write();
    }
}

