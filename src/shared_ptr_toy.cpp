#include "shared_ptr_toy.h"
// Реализация конструктора по умолчанию;
shared_ptr_toy::shared_ptr_toy() { toyPtr = nullptr; count = new int(1);}
// Реализация приватного конструктора;
shared_ptr_toy::shared_ptr_toy(const std::string& name) { count = new int(1); toyPtr = new Toy(name); }
// Реализация конструктора копирования;
shared_ptr_toy::shared_ptr_toy(const shared_ptr_toy& other) 
{
	this->toyPtr = other.toyPtr;
	this->count = other.count;
	(*count)++;
}
// Реализация конструктора принимающий указатель на объект Toy;
shared_ptr_toy::shared_ptr_toy(Toy* toyPtr) { count = new int(1); this->toyPtr = toyPtr; }
// Реализация деструктора класса;
shared_ptr_toy::~shared_ptr_toy()
{
	(*count)--;
	if (*count == 0)
	{
		delete toyPtr;
		delete count;
	}
}
// Реализация оператора присваивания;
shared_ptr_toy& shared_ptr_toy::operator=(const shared_ptr_toy& other)
{
	if (this != &other)
	{
		(*count)--;
		if (*this->count == 0) delete toyPtr;
		this->toyPtr = other.toyPtr;
		this->count = other.count;
		(*count)++;
	}

	return *this;
}
// Реализация оператора сравнения;
bool shared_ptr_toy::operator==(const shared_ptr_toy& other)
{
	if (this->toyPtr == other.toyPtr) return true;
	else return false;
}
// Реализация оператора сравнения;
bool shared_ptr_toy::operator!=(const shared_ptr_toy& other)
{
	if (this->toyPtr != other.toyPtr) return true;
	else return false;
}
std::string shared_ptr_toy::getName() {return toyPtr->getName();}
// Реализация геттера;
int shared_ptr_toy::getCount() { return *count; }
// Реализация функции создающей объект класса shared_ptr_toy;
shared_ptr_toy make_shared_ptr_toy(const std::string toyName) { return toyName; }