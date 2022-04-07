#include "Employee.h"

const float Employee::TAX = 0.01f;

void Employee::Read()
{
    std::cout << "enter name: ";
    std::cin >> name;

    std::cout << "enter age: ";
    std::cin >> age;

    std::cout << "enter zipcode: ";
    std::cin >> zipcode;

    std::cout << "enter wage: $";
    std::cin >> wage;

    std::cout << "enter hours worked(per week): ";
    std::cin >> hoursWorked;
}

void Employee::Write()
{
    float grossIncome = hoursWorked * wage;
    float netIncome = grossIncome - (grossIncome * TAX);
    float yearlyGrossIncome = grossIncome * 52;
    float yearlyNetIncome = netIncome * 52;

    std::cout << "name: " << name << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "zipcode: " << zipcode << std::endl;
    std::cout << "wage: " << wage << std::endl;
    std::cout << "hours worked(per week): " << hoursWorked << std::endl;
    std::cout << "weekly gross income: " << grossIncome << std::endl;
    std::cout << "weekly net income: " << netIncome << std::endl;
    std::cout << "yearly gross income: " << yearlyGrossIncome << std::endl;
    std::cout << "yearly net income: " << yearlyNetIncome << std::endl;
}