#pragma once
#include <iostream>
#include "Toy.h"

class shared_ptr_toy
{
private:
	// Указатель на класс Toy;
	Toy* toyPtr;
	// Указатель на количество указателей;
	int* count;
	// Объявление приватного конструктора;
	shared_ptr_toy(const std::string& name);
	friend shared_ptr_toy make_shared_ptr_toy(std::string toyName);
public:
	// Прототип конструктора по умолчанию;
	shared_ptr_toy();
	// Прототип конструктора принимающий указатель на объект Toy;
	shared_ptr_toy(Toy* toyPtr);
	// Прототип конструктора копирования;
	shared_ptr_toy(const shared_ptr_toy& toyPtr);
	// Прототип деструктора класса;
	~shared_ptr_toy();
	// Прототип оператора приваивания;
	shared_ptr_toy& operator=(const shared_ptr_toy& toyPtr);
	// Прототип оператора сравнения;
	bool operator==(const shared_ptr_toy& toyPtr);
	// Прототип оператора сравнения;
	bool operator!=(const shared_ptr_toy& toyPtr);
	// Прототип геттера возвращающего количество указателей указывающих на одну и ту же область в памяти;
	int getCount();
	// Прототип геттера названия игрушки;
	std::string getName();
};
// Прототип функции создающий объект класса shared_ptr_toy;
shared_ptr_toy make_shared_ptr_toy(const std::string toyName);