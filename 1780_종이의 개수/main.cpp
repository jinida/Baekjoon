#include <iostream>
#include <tuple>
static std::tuple<int, int,int> devide(int** arr, int x, int y, int num);

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;
	std::cin >> num;
	int input;
	if (num > 1) {
		int** arr = new int* [num];
		for (int i = 0; i < num; ++i)
		{
			arr[i] = new int[num];
			for (int j = 0; j < num; ++j)
			{
				std::cin >> input;
				arr[i][j] = input;
			}
		}

		std::tuple<int, int, int> answer = devide(arr, 0, 0, num);
		std::cout << std::get<2>(answer) << "\n" << std::get<1>(answer) << "\n" << std::get<0>(answer) << "\n";
	}
	else
	{
		std::cin >> input;
		if (input == 1)
			std::cout << "0\n0\n1\n";
		else if(input == 0)
			std::cout << "0\n1\n0\n";
		else
			std::cout << "1\n0\n0\n";
	}
}

static std::tuple<int, int, int> devide(int** arr, int x, int y, int num)
{
	if (num == 3)
	{
		int count_x = 0, count_y = 0, count_z = 0;
		for (int i = x; i < x + 3; ++i)
		{
			for (int j = y; j < y + 3; ++j)
			{
				if (arr[i][j] == 1)
					++count_x;
				else if (arr[i][j] == 0)
					++count_y;
				else
					++count_z;
			}
		}

		if (count_x == 9)
			return std::tuple<int, int, int>(1, 0, 0);
		else if (count_y == 9)
			return std::tuple<int, int, int>(0, 1, 0);
		else if (count_z == 9)
			return std::tuple<int, int, int>(0, 0, 1);
		else
			return std::tuple<int, int, int>(count_x, count_y, count_z);
	}

	std::tuple<int, int, int> p[3][3];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; j++)
			p[i][j] = devide(arr, x + i * (num / 3), y + j * (num / 3), num / 3);
	
	bool is_eql = true;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; j++)
		{
			if (p[i][j] != p[0][0])
			{
				is_eql = false;
				break;
			}
		}
	}
	
	if (is_eql)
	{
		if (std::get<0>(p[0][0]) == 1 && std::get<1>(p[0][0]) == 0 && std::get<2>(p[0][0]) == 0)
			return std::tuple<int, int, int>(1, 0, 0);
		else if (std::get<0>(p[0][0]) == 0 && std::get<1>(p[0][0]) == 1 && std::get<2>(p[0][0]) == 0)
			return std::tuple<int, int, int>(0, 1, 0);
		else if (std::get<0>(p[0][0]) == 0 && std::get<1>(p[0][0]) == 0 && std::get<2>(p[0][0]) == 1)
			return std::tuple<int, int, int>(0, 0, 1);
	}
	int sum1=0, sum2=0, sum3=0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; j++)
		{
			sum1 += std::get<0>(p[i][j]);
			sum2 += std::get<1>(p[i][j]);
			sum3 += std::get<2>(p[i][j]);
		}
	}
	return std::tuple<int, int, int>(sum1, sum2, sum3);
}
