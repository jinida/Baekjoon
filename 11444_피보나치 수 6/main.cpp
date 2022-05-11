#include <iostream>
#define ll long long int
using namespace std;

ll** dc(ll** mat, long long int n)
{
	if (n == 1)
		return mat;
	else
	{
		ll** a;
		ll** b;
		if (n & 1)
		{
			a = dc(mat, n - 1);
			b = mat;
		}
		else
		{
			a = dc(mat, n / 2);
			b = a;
		}

		ll** temp = new ll* [2];
		int sum = 0;
		for (int i = 0; i < 2; ++i)
		{
			temp[i] = new ll[2];
			for (int j = 0; j < 2; ++j)
			{
				for (int l = 0; l < 2; ++l)
				{
					sum = (sum + a[i][l] * b[l][j]) % 1000000007;
				}
				temp[i][j] = sum;
				sum = 0;
			}
		}

		if (a != mat && a != b)
		{
			for (int i = 0; i < 2; ++i)
				delete a[i];
			delete[] a;
		}

		if (b != mat)
		{
			for (int i = 0; i < 2; ++i)
				delete b[i];
			delete[] b;
		}

		return temp;
	}
}

int main()
{
	ll n;
	cin >> n;
	if (n == 0)
	{
		cout << "0\n";
		return 0;
	}
	ll** mat = new ll*[2];

	for (int i = 0; i < 2; ++i)
		mat[i] = new ll[2];
	mat[0][0] = 1;
	mat[0][1] = 1;
	mat[1][0] = 1;
	mat[1][1] = 0;
	
	ll** ans = dc(mat, n);

	cout << ans[0][1] << "\n";
	return 0;
}