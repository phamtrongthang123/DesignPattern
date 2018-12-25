#pragma once
#include "ToyDuck.h"
#include <iostream>

using namespace std;
class PlasticToyDuck :
	public ToyDuck
{
public:
	PlasticToyDuck();
	~PlasticToyDuck();

	void squeak() {
		cout << "Squack!" << endl;
	}
};

