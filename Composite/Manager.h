#pragma once
#include <string>
#include "Employee.h"
#include <iostream>
using namespace std;
class Manager :
	public Employee
{
	string name;
public:
	Manager(string newName);
	~Manager();

	void showInfo() {
		cout << "Manager: " << name << endl;
	}
};

