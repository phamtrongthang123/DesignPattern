#include "Sparrow.h"
#include "Bird.h"
#include "BirdAdapter.h"
#include "PlasticToyDuck.h"
#include "ToyDuck.h"

int main() {
	Sparrow sparrow;
	ToyDuck * toyDuck = new PlasticToyDuck();
	ToyDuck * birdAdapter = new BirdAdapter(&sparrow);

	cout << "Sparrow: " << endl;
	sparrow.fly();
	sparrow.makeSound();

	cout << "Plastic Toy Duck: " << endl;
	toyDuck->squeak();

	cout << "Bird Adapter: " << endl;
	birdAdapter->squeak();

	cin.ignore();
	delete toyDuck, birdAdapter;
	return 0;
}