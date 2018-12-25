#pragma once
#include "Bird.h"
#include <iostream>

using namespace std;
class Sparrow :
	public Bird
{
public:
	Sparrow();
	~Sparrow();

	void fly() {
		cout << "Fly high!" << endl;
	}

	void makeSound() {
		cout << "Chip chip!" << endl;
	}
};

