#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	const int row = 100, col = 100;
	bool board[row][col] = { {false, }, };
	int tc;
	std::cin >> tc;
	for (int i = 0; i != tc; ++i)
	{
		int lt_x, lt_y;
		std::cin >> lt_x >> lt_y;
		for (int y = lt_y; y != lt_y + 10; ++y)
		{
			for (int x = lt_x; x != lt_x + 10; ++x)
			{
				board[y][x] = true;
			}
		}
	}
	int sum =0;
	for (int i = 0; i != 100; ++i)
	{
		for (int j = 0; j != 100; ++j)
		{
			if (board[i][j])
				sum++;
		}
	}
	std::cout << sum;
}