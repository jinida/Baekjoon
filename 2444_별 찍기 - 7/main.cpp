#include <iostream>
#include <string.h>
int main()
{
	std::cin.sync_with_stdio(0);
	int input;
	std::cin >> input;
	for (int i = 0; i < input; ++i)
	{
		for (int j = 0; j < input - 1 - i; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i * 2 + 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}


	for (int i = 0; i < input - 1; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < (input - i) * 2 - 3; ++j)
		{
			std::cout << "*";
		}
		if (i != input - 2)
		{
			std::cout << "\n";
		}
	}
}