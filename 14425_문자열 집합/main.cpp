#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m;
	string temp;
	unordered_set<string> st;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		st.insert(temp);
	}
	int cnt = 0;
	for (int i = 0; i < m; ++i)
	{
		cin >> temp;
		if (st.find(temp) != st.end())
			++cnt;
	}

	cout << cnt << "\n";

}