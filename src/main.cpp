#include "Dog.h"

int main()
{
	shared_ptr_toy ball = make_shared_ptr_toy("Ball");
	shared_ptr_toy bone = make_shared_ptr_toy("Bone");
	shared_ptr_toy stick = make_shared_ptr_toy("Stick");
	 
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