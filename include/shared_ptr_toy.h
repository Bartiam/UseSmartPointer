#pragma once
#include <iostream>
#include "Toy.h"

class shared_ptr_toy
{
private:
	// ��������� �� ����� Toy;
	Toy* toyPtr;
	// ��������� �� ���������� ����������;
	int* count;
	// ���������� ���������� ������������;
	shared_ptr_toy(const std::string& name);
	friend shared_ptr_toy make_shared_ptr_toy(std::string toyName);
public:
	// �������� ������������ �� ���������;
	shared_ptr_toy();
	// �������� ������������ ����������� ��������� �� ������ Toy;
	shared_ptr_toy(Toy* toyPtr);
	// �������� ������������ �����������;
	shared_ptr_toy(const shared_ptr_toy& toyPtr);
	// �������� ����������� ������;
	~shared_ptr_toy();
	// �������� ��������� �����������;
	shared_ptr_toy& operator=(const shared_ptr_toy& toyPtr);
	// �������� ��������� ���������;
	bool operator==(const shared_ptr_toy& toyPtr);
	// �������� ��������� ���������;
	bool operator!=(const shared_ptr_toy& toyPtr);
	// �������� ������� ������������� ���������� ���������� ����������� �� ���� � �� �� ������� � ������;
	int getCount();
	// �������� ������� �������� �������;
	std::string getName();
};
// �������� ������� ��������� ������ ������ shared_ptr_toy;
shared_ptr_toy make_shared_ptr_toy(const std::string toyName);