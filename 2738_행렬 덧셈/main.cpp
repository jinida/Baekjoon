#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	int row, col;
	std::cin >> row >> col;
	int* srcA = new int[row * col];
	int* srcB = new int[row * col];
	for (int i = 0; i < row * col; ++i)
	{
		std::cin >> srcA[i];
	}
	for (int i = 0; i < row * col; ++i)
	{
		std::cin >> srcB[i];
	}
	for (int i = 0; i < row * col; ++i)
	{
		std::cout << srcA[i] + srcB[i] << " ";
		if (i % col == col - 1)
			std::cout << "\n";
	}

}