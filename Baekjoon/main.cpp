#include <iostream>
#include <vector>

#define ll long long int
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, m, num;
	std::cin >> n >> m;

	ll** arr = new ll * [n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new ll[n];
		for (int j = 0; j < n; ++j)
		{
			std::cin >> num;
			if (i == 0 && j == 0)
				arr[0][0] = num;
			else if (i == 0)
				arr[0][j] = arr[0][j - 1] + num;
			else if (j == 0)
				arr[i][0] = arr[i - 1][0] + num;
			else
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + num - arr[i - 1][j - 1];
		}
	}

	int x1, x2, y1, y2;

	for (int k = 0; k < m; ++k)
	{
		std::cin >> y1 >> x1 >> y2 >> x2;
		--x1; --y1; --x2; --y2;
		if (x1 == 0 && y1 == 0)
			std::cout << arr[y2][x2] << "\n";
		else if (y1 == 0)
			std::cout << arr[y2][x2] - arr[y2][x1 - 1] << "\n";
		else if (x1 == 0)
			std::cout << arr[y2][x2] - arr[y1 - 1][x2] << "\n";
		else
			std::cout << arr[y2][x2] - arr[y2][x1 - 1] - arr[y1 - 1][x2] + arr[y1 - 1][x1 - 1] << "\n";
	}

}