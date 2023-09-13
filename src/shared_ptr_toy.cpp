#include "shared_ptr_toy.h"
// ���������� ������������ �� ���������;
shared_ptr_toy::shared_ptr_toy() { toyPtr = nullptr; count = new int(1);}
// ���������� ���������� ������������;
shared_ptr_toy::shared_ptr_toy(const std::string& name) { count = new int(1); toyPtr = new Toy(name); }
// ���������� ������������ �����������;
shared_ptr_toy::shared_ptr_toy(const shared_ptr_toy& other) 
{
	this->toyPtr = other.toyPtr;
	this->count = other.count;
	(*count)++;
}
// ���������� ������������ ����������� ��������� �� ������ Toy;
shared_ptr_toy::shared_ptr_toy(Toy* toyPtr) { count = new int(1); this->toyPtr = toyPtr; }
// ���������� ����������� ������;
shared_ptr_toy::~shared_ptr_toy()
{
	(*count)--;
	if (*count == 0)
	{
		delete toyPtr;
		delete count;
	}
}
// ���������� ��������� ������������;
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
// ���������� ��������� ���������;
bool shared_ptr_toy::operator==(const shared_ptr_toy& other)
{
	if (this->toyPtr == other.toyPtr) return true;
	else return false;
}
// ���������� ��������� ���������;
bool shared_ptr_toy::operator!=(const shared_ptr_toy& other)
{
	if (this->toyPtr != other.toyPtr) return true;
	else return false;
}
std::string shared_ptr_toy::getName() {return toyPtr->getName();}
// ���������� �������;
int shared_ptr_toy::getCount() { return *count; }
// ���������� ������� ��������� ������ ������ shared_ptr_toy;
shared_ptr_toy make_shared_ptr_toy(const std::string toyName) { return toyName; }