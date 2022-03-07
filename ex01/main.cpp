#include <iostream>
#include <string>

#include "iter.hpp"

void printCharUp(const char& c)
{
	std::cout << (char)toupper(c);
}

void printPlusTwo(const int& n)
{
	std::cout << n + 2 << std::endl;
}

int main(void)
{
	{
		iter("ciao! come va?", 14, printCharUp);
		std::cout << std::endl;
	}

	{
		int array[5] = {5, 10, 40, 28, -55};
		iter(array, 5, printPlusTwo);
	}
}
