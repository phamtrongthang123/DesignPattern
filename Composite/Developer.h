#pragma once
#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;
class Developer :
	public Employee
{
	string name;
public:
	Developer(string newName);
	~Developer();

	void showInfo() {
		cout << "Developer: " << name << endl;
	}
};

