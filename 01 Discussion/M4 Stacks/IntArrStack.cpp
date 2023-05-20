#include <iostream>
#include "IntArrStack.h"

IntArrStack::IntArrStack(int size)
{
	this->stackArray = new int[size] { 0 };
	this->stackSize = size;
}

IntArrStack::~IntArrStack()
{
	std::cout << "InarrStack Deconstructor" << std::endl;
	delete[] this->stackArray;
	this->stackSize = 0;
}

void IntArrStack::push(int num)
{
	if (!isFull()) {

		//++index; // plus 1 before executing the instruction
		//index++; // plus 1 after executing a said instruction
		this->stackArray[++index] = num;
		return;
	}
	std::cout << "Stack is full" << std::endl;
}

void IntArrStack::pop()
{
	if (!isEmpty()) {
		this->stackArray[index--] = 0;
		return;
	}

	std::cout << "Stack is empty" << std::endl;
}

int IntArrStack::top()
{
	if (!isEmpty()) {
		return this->stackArray[index];
	}
	return -1;
}

bool IntArrStack::isEmpty()
{
	return index == -1;
}

bool IntArrStack::isFull()
{
	return index == stackSize - 1;
}
