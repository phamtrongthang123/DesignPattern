#pragma once
class Animal
{
public:
	Animal();
	void Lunch();
	virtual void eat() = 0;
	virtual  void makeFood() = 0;
	virtual ~Animal();
};

