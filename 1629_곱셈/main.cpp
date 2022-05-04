#include <iostream>
#include <map>
using namespace std;

#define ll long long int ;

void devide(int a, int b, int c, map<int, long long int>& m)
{
	int ans;
	if (b & 1)
	{
		if (m.find(b / 2) == m.end())
			devide(a, b / 2, c, m);
		if (m.find(b / 2 + 1) == m.end())
			devide(a, b / 2 + 1, c, m);
		m[b] = (m[b / 2] * m[b / 2 + 1]) % c;
	}
	else
	{
		if (m.find(b / 2) == m.end())
			devide(a, b / 2, c, m);
		m[b] = (m[b / 2] * m[b / 2]) % c;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int a, b, c;
	cin >> a >> b >> c;
	map<int, long long int> m;
	m[0] = 1;
	m[1] = a % c;

	devide(a, b, c, m);
	cout << m[b] << "\n";
}