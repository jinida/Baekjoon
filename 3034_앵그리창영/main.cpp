#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, w, h;
	cin >> n >> w >> h;

	double diag = sqrt(w * w + h * h);
	double num;
	string ans = "";
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		if (num <= diag)
			ans += "DA\n";
		else
			ans += "NE\n";
	}
	cout << ans;
}