#include <string>
#include <iostream>

#include "Person.h"


void Person::Display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Height: " << height << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}


