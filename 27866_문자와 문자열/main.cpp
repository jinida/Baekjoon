#include <iostream>
#include <math.h>

int main()
{
	std::cin.sync_with_stdio(0);
	std::string input;
	int idx;
	std::cin >> input >> idx;
	std::cout << input[idx - 1];
}