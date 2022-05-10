#include <iostream>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, m, k;
	cin >> n >> m;
	int sum = 0;
	int** a = new int* [n];
	int** b = new int* [m];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];
	}

	cin >> m >> k;

	for (int i = 0; i < m; ++i)
	{
		b[i] = new int[k];
		for (int j = 0; j < k; ++j)
			cin >> b[i][j];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			for (int l = 0; l < m; ++l)
			{
				sum += (a[i][l] * b[l][j]);
			}
			cout << sum << " ";
			sum = 0;
		}
		cout << "\n";
	}

	return 0;
}