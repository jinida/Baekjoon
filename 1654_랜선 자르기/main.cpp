#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int bin_search(vector<int>& v, ll start, ll end, int k)
{
	int mid = (start + end) / 2;
	int cnt = 0;
	if (mid == 0)
		return 0;

	for (int i = 0; i < v.size(); ++i)
		cnt += (v[i] / mid);

	if (start == end)
	{
		if (cnt == k)
			return start;
		else
			return start - 1;
	}

	if (cnt < k)
		return bin_search(v, start, mid, k);
	else
		return bin_search(v, mid + 1, end, k);
}

int main()
{
	vector<int> v;
	int input, n, k;
	cin >> n >> k;
	int max = -1;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		if (input > max)
			max = input;
		v.push_back(input);
	}

	int ans = bin_search(v, 1, max, k);
	cout << ans;
}