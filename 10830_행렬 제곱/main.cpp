#include <iostream>

using namespace std;

int** dc(int** mat, long long int n, int size)
{
	if (n == 1)
		return mat;
	else
	{
		int** a;
		int** b;
		if (n & 1)
		{
			a = dc(mat, n - 1, size);
			b = mat;
		}
		else
		{
			a = dc(mat, n/2, size);
			b = a;
		}

		int** temp = new int* [size];
		int sum = 0;
		for (int i = 0; i < size; ++i)
		{
			temp[i] = new int[size];
			for (int j = 0; j < size; ++j)
			{
				for (int l = 0; l < size; ++l)
				{
					sum = (sum + a[i][l] * b[l][j]) % 1000;
				}
				temp[i][j] = sum;
				sum = 0;
			}
		}

		for (int i = 0; i < size; ++i)
		{
			delete * (a + i);
			delete * (b + i);
		}

		delete[] a;
		delete[] b;

		return temp;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	long long int m;
	cin >> n >> m;
	int sum = 0;
	int** a = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
		}
	}

	int** ans = dc(a, m, n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
}