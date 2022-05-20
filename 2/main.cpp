#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double w, h, x, y, p;
	cin >> w >> h >> x >> y >> p;
	double r_1, r_2;
	double p_x, p_y;
	int ans = 0;
	for (int i = 0; i < p; ++i)
	{
		cin >> p_x >> p_y;
		if (((x <= p_x) & (p_x <= x + w)) & ((y <= p_y) & (p_y <= y + h)))
		{
			++ans;
			continue;
		}
		
		double dist1 = sqrt(pow(x - p_x, 2) + pow((y + (h / 2) - p_y), 2));
		if(dist1 <= (h/2))
		{
			++ans;
			continue;
		}
		
		double dist2 = sqrt(pow(x + w - p_x, 2) + pow((y + (h / 2) - p_y), 2));
		if (dist2 <= (h / 2))
		{
			++ans;
			continue;
		}
	}
	cout << ans;
}