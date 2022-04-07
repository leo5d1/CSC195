// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Sandwich
{
public:
	Sandwich()
	{
		cout << "constructor\n";
	}

	Sandwich(string name, float price) : name(name), price(price), isHot(false)
	{
		cout << "constructor\n";
		//this->name = name;
		//this->price = price;
	}

	~Sandwich()
	{
		cout << "destructor\n";
	}

	void Read()
	{
		cout << "enter name: ";
		cin >> name;
	}
	void Write();

private:
	string name;
	float price;
	bool isHot;
};

void Sandwich::Write()
{
	cout << "name: " << name << endl;
}


// structure
struct Point
{
	int x;
	int y;
};

int main()
{
	int mx;
	int my;

	Point point;
	point.x = 300;
	point.y = 200;

	{
		//scope
		int j = 5;
		{
			j = 10;
		}
	}

	{
		Sandwich sandwich("Ham", 4.5);
		//sandwich.Read();
		sandwich.Write();
	}

	cout << "end of program.\n";

	enum class Difficulty
	{
		Easy,
		Medium,
		Hard
	};

	enum class Eggs
	{
		Easy,
		Scarmbled
	};

	Difficulty d = Difficulty::Easy;
	if (d == Difficulty::Easy) cout << "Easy\n";

	union Data
	{
		int i;
		float f;
		bool b;
	};

	Data data;
	//data.i = 10;
	data.f = 23.5f;
	//data.b = true;

	cout << &data.i << endl;
	cout << &data.f << endl;
	cout << &data.b << endl;
	cout << data.i << endl;
}

