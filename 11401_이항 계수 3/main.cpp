#include <iostream>
#define ll long long int
#define m 1000000007
using namespace std;

ll dc(ll x, int n)
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

void soulution_1()
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

	c = dc(b, m - 2);
	ll ans = (a * c) % m;

	cout << ans << "\n";
}

void solution_2()
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

	ll x0 = 0, x1 = 1, r0 = m, r1 = b, q, temp;
	
	while(r1 != 1)
	{
		q = r0 / r1;
		temp = x1;
		x1 = (x0 - (x1 * q)) % m;
		x0 = temp;

		temp = r1;
		r1 = r0 % r1;
		r0 = temp;
	}

	ll ans = (x1 % m) * (a % m) % m;

	if (ans < 0) ans += m;
	cout << ans << "\n";
}

int main()
{
	solution_2();
}