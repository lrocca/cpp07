#include <iostream>
#include <random>

#include "Array.hpp"

#define MAX_VAL 750

void	checkValues(Array<int> x, int *y)
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

void	checkValues(Array<int> x, Array<int> y)
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

	// empty
	try
	{
		Array<int>	empty_array;
		empty_array[0] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// invalid size
	try
	{
		Array<int>	invalid[0];
		// Array<int>	invalid(0);
		invalid[0] = 0; // would have segfaulted
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// copy
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		checkValues(test, tmp);
		checkValues(numbers, tmp);
		checkValues(numbers, test);

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

	std::cout << numbers[MAX_VAL - 1] << std::endl;

	delete [] mirror;
}
