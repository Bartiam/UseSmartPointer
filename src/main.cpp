#include "Dog.h"

int main()
{
	std::shared_ptr<Toy> ball = std::make_shared<Toy>("Ball");
	std::shared_ptr<Toy> bone = std::make_shared<Toy>("Bone");
	std::shared_ptr<Toy> stick = std::make_shared<Toy>("Stick");

	Dog rex("Rex", 2.5f, bone);
	Dog sharik("Sharik", 6.0f, stick);
	Dog max("Max", 1.5f, ball);
	Dog pushok("Pushok", 5.0f, stick);

	pushok.dropToy();
	rex.getToy(ball);
	pushok.getToy(bone);
	max.dropToy();
	rex.getToy(ball);

	return 0;
}