#include <iostream>

static std::pair<int, int> devide(bool** arr, int x, int y, int num);

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;
	std::cin >> num;
	bool** arr = new bool* [num];
	bool input;
	for (int i = 0; i < num; ++i)
	{
		arr[i] = new bool[num];
		for (int j = 0; j < num; ++j)
		{
			std::cin >> input;
			arr[i][j] = input;
		}
	}

	std::pair<int, int> answer = devide(arr, 0, 0, num);
	std::cout << answer.second << "\n" << answer.first << "\n";
}

static std::pair<int, int> devide(bool **arr, int x, int y, int num)
{
	if (num == 2)
	{
		int count_x=0, count_y=0;
		for (int i = x; i < x + 2; ++i)
		{
			for (int j = y; j < y + 2; ++j)
			{
				if (arr[i][j])
					++count_x;
				else
					++count_y;
			}
		}
		if (count_x == 4)
			return { 1, 0 };
		else if (count_y == 4)
			return { 0, 1 };
		else
			return { count_x, count_y };
	}
	std::pair<int, int> p1, p2, p3, p4;
	p1 = devide(arr, x, y, num / 2);
	p2 = devide(arr, x + num / 2, y, num / 2);
	p3 = devide(arr, x, y + num / 2, num / 2);
	p4 = devide(arr, x + num / 2, y + num / 2, num / 2);
	if (p1 == p2 && p2 == p3 && p3 == p4)
	{
		if (p1.first == 1 && p1.second == 0 || p1.first == 0 && p1.second == 1)
		{
			if (arr[x][y])
				return { 1, 0 };
			else
			{
				return { 0, 1 };
			}
		}
	}
	return { p1.first + p2.first + p3.first + p4.first, p1.second + p2.second + p3.second + p4.second };
}
