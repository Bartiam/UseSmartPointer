#include "Dog.h"
// Реализация конструктора по умолчанию (Пример: Cобака только что родилась и ей ещё не дали имя);
Dog::Dog() { this->name = "No name yet."; this->age = 0.0f; }
// Реализация конструктора устанавливающего возраста собаки;
Dog::Dog(const float& age) : Dog("No name yet.", age, nullptr) {}
// Реализация конструктора с установкой имени собаки;
Dog::Dog(const std::string& name) : Dog(name, 0, nullptr) {}
// Реализация конструктора с установкой имени и возраста собаки;
Dog::Dog(const std::string& name, const float& age) : Dog(name, age, nullptr) {}
// Реализация конструктора с установкой всех параметров собаки;
Dog::Dog(const std::string& name, const float& age, shared_ptr_toy toy)
{
	if (age >= 0 || age <= 15)
		this->age = age;
	this->name = name;
	if (toy.getCount() > 2)
	{
		std::cout << "Another dog is playing with " << toy.getName() << "." << std::endl;
		this->toyPtr = nullptr;
	}
	else
		this->toyPtr = toy;
}
// Реализация метода бросить игрушку;
void Dog::dropToy()
{
	if (toyPtr == nullptr) std::cout << "\"" << this->name << "\" Has nothing to throw away" << std::endl;
	else
	{
		std::cout << this->name << ": The " << toyPtr.getName() << " was drobed. " << std::endl;
		toyPtr = nullptr;
	}
}
// реализация метода подобрать игрушку;
void Dog::getToy(shared_ptr_toy& toy)
{
	if (toy == this->toyPtr)
		std::cout << this->name << ": I already have " << toy.getName() << "." << std::endl;
	else if (toy.getCount() > 1)
		std::cout << "Another dog is playing with " << toy.getName() << "." << std::endl;
	else if (this->toyPtr != nullptr)
	{
		dropToy();
		std::cout << "The dog by name: \"" << this->name << "\" picked up " << toy.getName() << "." << std::endl;
		this->toyPtr = toy;
	}
	else
	{
		std::cout << "The dog by name: \"" << this->name << "\" picked up " << toy.getName() << "." <<  std::endl;
		this->toyPtr = toy;
	}
}
