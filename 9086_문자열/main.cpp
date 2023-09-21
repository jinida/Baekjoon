#include <iostream>
#include <math.h>

int main()
{
	std::cin.sync_with_stdio(0);
	int num;
	std::cin >> num;
	std::string* input = new std::string[num];
	for (int i = 0; i < num; ++i)
	{
		std::cin >> input[i];
	}

	for (int i = 0; i < num; ++i)
	{
		std::cout << input[i][0] << input[i][input[i].length() - 1] << "\n";
	}
}