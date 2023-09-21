#include <iostream>
#include <math.h>
#define SWAP(idx1, idx2) \
	int temp = arr[idx1]; arr[idx1] = arr[idx2]; arr[idx2] = temp;
int main()
{
	std::cin.sync_with_stdio(0);
	int n, m;
	std::cin >> n >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i != m; ++i)
	{
		int start, end, range;
		std::cin >> start >> end;
		range = (end - start + 1) / 2;
		for (int j = 0; j < range; ++j)
		{
			SWAP(start - 1, end - 1)
			start++; end--;
		}
	}

	for (int i = 0; i != n; ++i)
	{
		std::cout << arr[i] << " ";
	}

}