#include <iostream>
#include <string.h>
int main()
{
	std::cin.sync_with_stdio(0);
	int a[] = {1, 1, 2, 2, 2, 8};
	for(int i = 0; i < 6; ++i)
	{
		int input;
		std::cin >> input;
		std::cout << a[i] - input << " ";
	}
}