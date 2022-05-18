#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num, m;
	unordered_map<int, string> um;
	unordered_map<string, int> um2;
	string input;
	
	cin >> num >> m;
	for (int i = 1; i <= num; ++i)
	{
		cin >> input;
		um.insert({ i, input });
		um2.insert({ input, i });
	}
	string answer = "";
	for (int i = 0; i < m; ++i)
	{
		cin >> input;
		if (input[0] > 57)
		{
			answer += (to_string(um2[input]) + "\n");
		}
		else
		{
			answer += (um[stoi(input)]+"\n");
		}
	}

	cout << answer << "\n";
}