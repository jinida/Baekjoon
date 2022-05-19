#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<string> us;
	string st;
	cin >> st;
	for (int i = 1; i <= st.size(); ++i)
	{
		for (int j = 0; j < st.size() - i + 1; ++j)
		{
			us.insert(st.substr(j, i));
		}
	}

	cout << us.size() << "\n";
}