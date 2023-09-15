#pragma once
#include <string>

class Toy
{
private:
	std::string name;
public:
	Toy(const std::string& name);
	void setToyName(const std::string& name);
	const std::string& getName();
};