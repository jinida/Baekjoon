#include <iostream>
#include <string.h>

int main()
{
	std::cin.sync_with_stdio(0);
	int n, m;
	std::cin >> n >> m;
	int* arr = new int[n];
	memset(arr, 0, sizeof(int) * n);
	for (int i = 0; i != m; ++i)
	{
		int start, end, ball;
		std::cin >> start >> end >> ball;
		for (int j = start - 1; j <= end - 1; ++j)
		{
			arr[j] = ball;
		}
	}
	
	for (int i = 0; i != n; ++i)
	{
		std::cout << arr[i] << " ";
	}

}