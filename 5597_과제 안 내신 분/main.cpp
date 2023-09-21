#include <iostream>
#include <string.h>

int main()
{
	std::cin.sync_with_stdio(0);
	const int num = 28;
	bool* arr = new bool[30];
	int input;
	memset(arr, 0, sizeof(bool) * 30);
	for (int i = 0; i != num; ++i)
	{
		std::cin >> input;
		arr[input - 1] = true;
	}

	for (int i = 0; i != 30; ++i)
	{
		if (arr[i] == false)
		{
			std::cout << i + 1 << "\n";
		}
	}
}