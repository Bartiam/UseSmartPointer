#pragma once
#include "Toy.h"
#include <iostream>

class Dog
{
private:
	// Переменные объекта "Dog";
	std::string name;
	float age;
	// Указатель на объект класса "Toy";
	std::shared_ptr<Toy> toy;
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
	Dog(const std::string& name, const float& age, std::shared_ptr<Toy> toy);
	// Прототип метода позволяющий бросить игрушку;
	void dropToy();
	// Прототип метода подобрать игрушку;
	void getToy(const std::shared_ptr<Toy>& toy);
};