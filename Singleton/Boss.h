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
	~Boss();
};

