#pragma once
#include "ToyDuck.h"
#include "Bird.h"
class BirdAdapter :
	public ToyDuck
{
	Bird *bird;
public:
	BirdAdapter(Bird * newBird);
	~BirdAdapter();

	void squeak() {
		bird->makeSound();
	}
};

