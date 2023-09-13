#pragma once
#include "Toy.h"
#include "shared_ptr_toy.h"

class Dog
{
private:
	// Переменные объекта "Dog";
	std::string name;
	float age;
	// Указатель на объект класса "Toy";
	shared_ptr_toy toyPtr;
public:
	// Прототип конструктора по умолчанию;
	Dog();
	// Прототип конструктора устанавливающего возраст собаки;
	Dog(const float& age);
	// Прототип конструктора устанавливающего имя собаки;
	Dog(const std::string& name);
	// Прототип конструктора устанавливающего имя и возраст собаки;
	Dog(const std::string& name, const float& age);
	// Прототип конструктора устанавливающего все параметры собаки;
	Dog(const std::string& name, const float& age, shared_ptr_toy toy);
	// Прототип метода позволяющий бросить игрушку;
	void dropToy();
	// Прототип метода подобрать игрушку;
	void getToy(shared_ptr_toy& toy);
};