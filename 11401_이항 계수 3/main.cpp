#include <iostream>
#define ll long long int
#define m 1000000007
using namespace std;

ll dc(ll x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n & 1)
		return (dc(x, n - 1) * x) % m;
	else
	{
		ll a = dc(x, n / 2) % m;
		return (a * a) % m;
	}
}

int main()
{
	int n, r;
	cin >> n >> r;

	ll a = 1, b = 1, c;
	for (int i = 1; i <= n; ++i)
		a = (a * i) % m;
	for (int i = 1; i <= r; ++i)
		b = (b * i) % m;
	for (int i = 1; i <= (n - r); ++i)
		b = (b * i) % m;

	c = dc(b, m-2);
	ll ans = (a * c) % m;

	cout << ans << "\n";
}