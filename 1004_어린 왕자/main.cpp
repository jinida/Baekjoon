#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int tc;
	cin >> tc;

	int num;
	pair<double, double> src, dst;
	double x, y, r;
	double dist_src, dist_dst;
	int ans = 0;
	vector<int> v;
	for (int i = 0; i < tc; ++i)
	{
		cin >> x >> y;
		src = { x, y };
		cin >> x >> y;
		dst = { x, y };

		cin >> num;
		for (int j = 0; j < num; ++j)
		{
			cin >> x >> y >> r;

			dist_src = sqrt(pow(src.first - x, 2) + pow(src.second - y, 2));
			dist_dst = sqrt(pow(dst.first - x, 2) + pow(dst.second - y, 2));

			if ((dist_src < r) ^ (dist_dst < r))
			{
				if (dist_src < r)
					++ans;
				else if (dist_dst < r)
					++ans;
			}
		}
		v.push_back(ans);
		ans = 0;
	}

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << "\n";
}
