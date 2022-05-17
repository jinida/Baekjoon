#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num, temp;
	unordered_set<int> m;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> temp;
		m.insert(temp);
	}
	
	int num2, temp2;
	cin >> num2;
	for (int i = 0; i < num2; ++i)
	{
		cin >> temp2;
		if (m.find(temp2) != m.end())
		{
			m.erase(temp2);
			cout << "1 ";
		}
		else
			cout << "0 ";
	}
}