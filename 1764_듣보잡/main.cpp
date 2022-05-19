#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, m;
	string st;
	cin >> n >> m;
	unordered_set<string> us;

	for (int i = 0; i < n; ++i)
	{
		cin >> st;
		us.insert(st);
	}

	string ans = "";
	vector<string> v;
	for (int i = 0; i < m; ++i)
	{
		cin >> st;
		if (us.find(st) != us.end())
			v.push_back(st);
	}
	sort(v.begin(), v.end());

	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << "\n";
}