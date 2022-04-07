#pragma once
#include <iostream>

class Employee
{
public:
	void Read();
	void Write();

private:
	std::string name;
	unsigned int age;
	unsigned int zipcode;
	float wage;
	unsigned int hoursWorked;

	static const float TAX;
};