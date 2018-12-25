#include "Boss.h"
#include <iostream>



Boss * Boss::instance = 0;
Boss::Boss()
{
	name = "Pham Trong Thang";
}


Boss * Boss::getInstance()
{
	if (instance == 0)
	{
		instance = new Boss();
	}
	return instance;
}

void Boss::sayName()
{
	cout << name << endl;
}

Boss::~Boss()
{
	cout << "Da xoa!!!" << endl;
}
