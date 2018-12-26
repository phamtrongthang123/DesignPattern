#pragma once
#include <string>
using namespace std;
class Boss
{
	Boss();
	static Boss * instance;
	string name;

public:
	static Boss * getInstance();
	void sayName();
	static void resetInstance() {
		delete instance;
		instance = 0;
	}
	~Boss();
};

