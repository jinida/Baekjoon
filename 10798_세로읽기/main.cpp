#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	const int num = 5;
	char board[15][num] = { {}, };
	
	for (int i = 0; i != num; ++i)
	{
		std::string s;
		std::cin >> s;
		for (int j = 0; j != s.length(); ++j)
		{
			board[j][i] = s[j];
		}
	}
	
	for (int i = 0; i != 15; ++i)
	{
		for (int j = 0; j != num; ++j)
		{
			if (board[i][j])
			{
				std::cout << board[i][j];
			}
		}
	}
}