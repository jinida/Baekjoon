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
	int num;
	cin >> n >> m;
	unordered_set<int> us;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		us.insert(num);
	}

	vector<int> v;
	for (int i = 0; i < m; ++i)
	{
		cin >> num;
		if (us.find(num) != us.end())
			v.push_back(num);
	}

	cout << n + m - 2 * v.size() << "\n";
}