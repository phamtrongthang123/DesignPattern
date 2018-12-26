#include "Boss.h"
#include <iostream>

using namespace std;
int main()
{
	Boss * a = Boss::getInstance();

	a->sayName();

	a->resetInstance();
	cin.ignore();
	return 0;
}
