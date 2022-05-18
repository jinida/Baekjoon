#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int num, val;
	cin >> num;
	unordered_map<int, int> um;
	
	for (int i = 0; i < num; ++i)
	{
		cin >> val;
		if (um.find(val) != um.end())
			++um[val];
		else
			um.insert({ val, 1 });
	}
	
	cin >> num;
	string ans = "";
	for (int i = 0; i < num; ++i)
	{
		cin >> val;
		if (um.find(val) != um.end())
			ans += (to_string(um[val]) + " ");
		else
			ans += "0 ";
	}

	cout << ans;
}