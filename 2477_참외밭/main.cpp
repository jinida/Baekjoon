#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int num;
	cin >> num;
	deque<pair<int, int>> q;
	int a, b;
	for (int i = 0; i < 6; ++i)
	{
		cin >> a >> b;
		q.push_back({ a, b });
	}
	
	for (int i = 0; i < 6; ++i)
	{
		if (!(q[0].first == q[2].first && q[1].first == q[3].first))
		{
			q.push_back(q.front());
			q.pop_front();
		}
	}

	cout << num * ((q[4].second * q[5].second) - (q[1].second * q[2].second)) << "\n";
}