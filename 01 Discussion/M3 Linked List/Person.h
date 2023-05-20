#pragma once

class Person
{
private:
	std::string name;
	int age;
	int height;
	int weight;
public:
	void SetName(std::string name) { this->name = name; }
	std::string GetName() { return name;}

	void SetAge(int age) { this->age = age; }
	int GetAge() { return age;  }

	void SetHeight(int height) { this->height = height; }
	int GetHeight() { return height;}

	void SetWeight(int weight) { this->weight = weight; }
	int GetWeight() { return weight; }

	void Display();
};

