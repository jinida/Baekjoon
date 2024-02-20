#include <iostream>

int recursion(std::string& s, int l, int r)
{
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 1;
	else return recursion(s, l + 1, r - 1) + 1;
}

int main()
{
	int testCase;
	std::cin >> testCase;
	for (int i = 0; i < testCase; ++i)
	{
		std::string s;
		std::cin >> s;
		int inputLength = s.length();
		int numRecursion = recursion(s, 0, inputLength - 1);
		std::cout << ((inputLength / 2 + 1) == numRecursion) << " " << numRecursion << "\n";
	}
	return 0;
}