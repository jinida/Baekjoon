#include <iostream>
#include <string.h>
#define SWAP(idx1, idx2) \
	int temp = arr[idx1]; arr[idx1] = arr[idx2]; arr[idx2] = temp;

int main()
{
	std::cin.sync_with_stdio(0);
	int n, m;
	std::cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i != n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i != m; ++i)
	{
		int start, end, ball;
		std::cin >> start >> end;
		SWAP(start - 1, end - 1)
	}

	for (int i = 0; i != n; ++i)
	{
		std::cout << arr[i] << " ";
	}

}