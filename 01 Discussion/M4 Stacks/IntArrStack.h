#pragma once

class IntArrStack {
private:
	int stackSize = 0;
	int* stackArray = nullptr;
	int index = -1;
public:
	IntArrStack(int size);
	~IntArrStack();
	void push(int a);
	void pop();
	int top();
	bool isEmpty();
	bool isFull();
};

