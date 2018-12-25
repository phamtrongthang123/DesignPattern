#include "Boss.h"
#include <iostream>

using namespace std;
int main()
{
	Boss * a = Boss::getInstance();

	a->sayName();

	delete a;
	cin.ignore();
	return 0;
}
