#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int bin_search(vector<int>& v, ll start, ll end, int m)
{
	ll mid = (start + end) / 2;
	ll cnt = 0;

	for (int i = 0; i < v.size(); ++i)
	{
		if (mid < v[i])
			cnt = cnt + (v[i] - mid);
		else
			cnt += v[i];

		if (m <= cnt)
 			break;
	}

	if (start == end)
	{
		if (m <= cnt)
			return start;
		else
			return start - 1;
	}

	if (m <= cnt)
		return bin_search(v, mid + 1, end, m);
	else
		return bin_search(v, start, mid, m);
}

int main()
{
	int n, m, num, max = -1;
	std::cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		if (num > max)
			max = num;
		v.push_back(num);
	}

	ll start = 1, end = (ll)max;
	cout << bin_search(v, start, end, m) << "\n";
}