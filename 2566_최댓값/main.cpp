#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	const int num = 81;
	int min = -1, x, y;

	for (int i = 0; i != num; ++i)
	{
		int value;
		std::cin >> value;
		if (min < value)
		{
			min = value;
			x = i % 9;
			y = i / 9;
		}
	}
	std::cout << min << "\n" << y + 1 << " " << x + 1;
}