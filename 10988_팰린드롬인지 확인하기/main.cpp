#include <iostream>
#include <string.h>
int main()
{
	std::cin.sync_with_stdio(0);
	std::string input;
	std::cin >> input;
	bool valid = true;
	for (int i = 0; i < input.length() / 2; ++i)
	{
		if (input[i] != input[input.length() - 1 - i])
		{
			valid = false;
			break;
		}
	}

	std::cout << valid ? 1 : 0;
}