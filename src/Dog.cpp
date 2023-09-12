#include "Dog.h"
// Реализация конструктора по умолчанию (Пример: Cобака только что родилась и ей ещё не дали имя);
Dog::Dog() { this->name = "No name yet."; this->age = 0.0f; toy = nullptr; }
// Реализация конструктора устанавливающего возраста собаки;
Dog::Dog(const float& age) : Dog("No name yet.", age, nullptr) {}
// Реализация конструктора с установкой имени собаки;
Dog::Dog(const std::string& name) : Dog(name, 0, nullptr) {}
// Реализация конструктора с установкой имени и возраста собаки;
Dog::Dog(const std::string& name, const float& age) : Dog(name, age, nullptr) {}
// Реализация конструктора с устновкой всех параметров собаки;
Dog::Dog(const std::string& name, const float& age, std::shared_ptr<Toy> toy)
	: name(name), age(age) 
{
	if (age >= 0 || age <= 15)
		this->age = age;
	this->name = name;
	if (toy.use_count() > 2)
		this->toy = nullptr;
	else
		this->toy = toy;
}
// Реализация метода бросить игрушку;
void Dog::dropToy()
{
	if (toy == nullptr) std::cout << "\"" << this->name << "\" Has nothing to throw away" << std::endl;
	else
	{
		std::cout << this->name << ": The " << toy->getName() << " was drobed. " << std::endl;
		toy = nullptr;
	}
}
// реализация метода подобрать игрушку;
void Dog::getToy(const std::shared_ptr<Toy>& toy)
{
	if (toy == this->toy)
		std::cout << this->name << ": I already have " << toy->getName() << "." << std::endl;
	else if (toy.use_count() > 1)
		std::cout << "Another dog is playing with " << toy->getName() << "." << std::endl;
	else if (this->toy != nullptr)
	{
		dropToy();
		std::cout << "The dog by name: \"" << this->name << "\" picked up " << toy->getName() << "." << std::endl;
		this->toy = toy;
	}
	else
	{
		std::cout << "The dog by name: \"" << this->name << "\" picked up " << toy->getName() << "." <<  std::endl;
		this->toy = toy;
	}
}
