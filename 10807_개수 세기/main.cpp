#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	int num;
	std::cin >> num;
	int* arr = new int[num];

	for (int i = 0; i != num; ++i)
	{
		std::cin >> arr[i];
	}
	int value, answer = 0;
	std::cin >> value;
	for (int i = 0; i != num; ++i)
	{
		if (value == arr[i])
		{
			answer++;
		}
	}
	std::cout << answer;
}