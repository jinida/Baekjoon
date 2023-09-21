#include <iostream>

int main()
{
	std::cin.sync_with_stdio(0);
	int num;
	std::cin >> num;
	std::string output = "";
	for (int i = 0; i < num / 4; i++, output += "long ");
	std::cout << output << "int";
}