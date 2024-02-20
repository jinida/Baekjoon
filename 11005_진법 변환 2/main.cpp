#include <iostream>
#include <string>

int main()
{
	int num, num2;
	std::cin >> num >> num2;
	std::string s = "";

	while (num != 0)
	{
		int rem = num % num2;
		if (rem < 10)
		{
			s = std::to_string(rem) + s;
		}
		else
		{
			s = static_cast<char>(55 + rem) + s;
		}
		num /= num2;
	}

	if (s == "")
	{
		s = "0";
	}
	std::cout << s;
}