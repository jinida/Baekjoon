#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool binary_search(vector<int>& v, int val, int start, int end)
{
	if (start == end)
	{
		if (v[start] == val)
			return true;
		else
			return false;
	}
	int mid = (start + end) / 2;
	if (v[mid] == val)
		return true;
	else if (v[mid] > val)
	{
		return binary_search(v, val, start, mid);
	}
	else
	{
		return binary_search(v, val, mid + 1, end);
	}
}

int main()
{
	int num, input;
	cin >> num;
	vector<int> v;
	for (int i = 0; i < num; ++i)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());
	vector<int> ans;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> input;
		ans.push_back(binary_search(v, input, 0, v.size() - 1));
	}

	for (int i = 0; i < num; ++i)
		cout << ans[i] << "\n";
}