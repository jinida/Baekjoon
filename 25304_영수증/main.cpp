#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	int sum, sum2 = 0, numTest;
	int a, b;
	std::cin >> sum >> numTest;
	for (int i = 0; i != numTest; ++i)
	{
		std::cin >> a >> b;
		sum2 += a * b;
	}

	if (sum != sum2)
	{
		std::cout << "No";
	}
	else
	{
		std::cout << "Yes";
	}
	return 0;
}