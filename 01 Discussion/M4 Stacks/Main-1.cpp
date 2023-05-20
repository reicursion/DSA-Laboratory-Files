#include <iostream>
#include <string>

#include "IntArrStack.h"

int main()
{
	{
		IntArrStack stack(5);

		int num = 1;
		while (!stack.isFull()) {
			stack.push(5 * num++);
			std::cout << "Pushing " << stack.top() << std::endl;
		}


		while (!stack.isEmpty())
		{
			std::cout << "Top: " << stack.top() << std::endl;
			stack.pop();
		}

	}


	std::cout << "Ending main..." << std::endl;
}

