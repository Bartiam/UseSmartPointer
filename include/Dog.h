#pragma once
#include "Toy.h"
#include "shared_ptr_toy.h"

class Dog
{
private:
	// ���������� ������� "Dog";
	std::string name;
	float age;
	// ��������� �� ������ ������ "Toy";
	shared_ptr_toy toyPtr;
public:
	// �������� ������������ �� ���������;
	Dog();
	// �������� ������������ ���������������� ������� ������;
	Dog(const float& age);
	// �������� ������������ ���������������� ��� ������;
	Dog(const std::string& name);
	// �������� ������������ ���������������� ��� � ������� ������;
	Dog(const std::string& name, const float& age);
	// �������� ������������ ���������������� ��� ��������� ������;
	Dog(const std::string& name, const float& age, shared_ptr_toy toy);
	// �������� ������ ����������� ������� �������;
	void dropToy();
	// �������� ������ ��������� �������;
	void getToy(shared_ptr_toy& toy);
};