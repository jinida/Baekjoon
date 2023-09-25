#include <iostream>
#include <string>

int main()
{
	std::string s;
	int num;
	std::cin >> s >> num;
	int sum = 0;
	for (int i = s.size() - 1, n = 1; i != -1; --i, n *= num)
	{
		if (s[i] > 64)
		{
			sum += (s[i] - 55) * n;
		}
		else
		{
			sum += (s[i] - 48) * n;
		}
	}
	std::cout << sum;
}