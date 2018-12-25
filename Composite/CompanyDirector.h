#pragma once
#include "Employee.h"
#include <vector>
#include <string> 
#include <iostream>

using namespace std;
class CompanyDirector :
	public Employee
{
	vector<Employee*> m_employees;
public:
	CompanyDirector();
	~CompanyDirector();


	void showInfo() {
		for (auto e : m_employees) {
			e->showInfo();
		}
	}

	void addEmployee(Employee * newE) {
		m_employees.push_back(newE);
	}

	void removeEmployee(Employee* e) {
		//remove specific value e
	}

};

