#include <iostream>
#include <algorithm>
int main()
{
	int n, k;
	std::cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	std::sort(arr, arr + n, [](int a, int b) {return a > b; });
	std::cout << arr[k - 1] << "\n";
}
