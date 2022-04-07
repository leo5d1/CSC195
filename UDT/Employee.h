#pragma once
#include <string>

class Employee
{
public:
	void Read();
	void Write();

private:
	std::string name;
	float wage;
};
