#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::cin.sync_with_stdio(0);
	std::unordered_map<std::string, float> m;
	m["A+"] = 4.5; m["A0"] = 4.0; m["B+"] = 3.5;
	m["B0"] = 3.0; m["C+"] = 2.5; m["C0"] = 2.0;
	m["D+"] = 1.5;	m["D0"] = 1.0; m["F"] = 0.0;
	m["P"] = -1.f;
	float sum1 = 0.f, sum2 = 0.f;

	for (int i = 0; i < 20; ++i)
	{
		std::string input;
		std::getline(std::cin, input);
		int idx1 = input.find(' ');
		int idx2 = input.find(' ', idx1 + 1);
		float grad = stof(input.substr(idx1 + 1, 3));
		float cls = m[input.substr(idx2 + 1, input.length() - idx2)];
		if (cls < 0)
			continue;
		sum1 += grad * cls;
		sum2 += grad;
	}
	std::cout << sum1 / sum2;
}