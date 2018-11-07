#include "ChimBoCau.h"
#include <iostream>

using namespace std;
int main()
{
	ChimBoCau c;
	cout << c.thuBay() << endl;
	cout << "Bi ban trung " << endl;
	c.gayCanh();
	cout <<	c.thuBay() << endl;
	cin.ignore();
	return 0;
}