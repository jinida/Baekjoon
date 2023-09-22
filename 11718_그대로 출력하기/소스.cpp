#include <iostream>
#include <string.h>
int main()
{
	std::cin.sync_with_stdio(0);
	while (1)
	{
		char input[110];
		std::cin.getline(input, 110);
		std::string s(input);
		if (s == "")
		{
			break;
		}
		else
		{
			std::cout << s << "\n";
		}
	}
}