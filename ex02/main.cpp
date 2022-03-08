#include <iostream>
#include <random>

#include "Array.hpp"

#define MAX_VAL 750

void	checkValues(Array<int> y, int *x)
{
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (x[i] != y[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}

int main(void)
{
	Array<int>	numbers(MAX_VAL);
	int*		mirror = new int[MAX_VAL];

	std::random_device	rd;

	// init
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rd();
		numbers[i] = value;
		mirror[i] = value;
	}

	// copy
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		for (int i = 0; i < MAX_VAL; i++)
		{
			tmp[i] = rd();
		}
	}

	checkValues(numbers, mirror);

	// bounds tests
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete [] mirror;
}
