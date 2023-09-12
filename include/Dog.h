#pragma once
#include "Toy.h"
#include <iostream>

class Dog
{
private:
	// ���������� ������� "Dog";
	std::string name;
	float age;
	// ��������� �� ������ ������ "Toy";
	std::shared_ptr<Toy> toy;
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
	Dog(const std::string& name, const float& age, std::shared_ptr<Toy> toy);
	// �������� ������ ����������� ������� �������;
	void dropToy();
	// �������� ������ ��������� �������;
	void getToy(const std::shared_ptr<Toy>& toy);
};