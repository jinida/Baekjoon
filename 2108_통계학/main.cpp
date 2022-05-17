#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int num, sum = 0;
	std::cin >> num;
	int* input = new int[num];
	int sort[8001] = { 0, };
	for (int i = 0; i < num; ++i)
	{
		std::cin >> input[i];
		sum += input[i];
		sort[input[i] + 4000]++;
	}
	
	vector<int> v, v2;
	int freq = 0;
	for (int i = 0; i <= 8000; ++i)
	{
		if (sort[i] != 0)
		{
			for (int j = 0; j < sort[i]; ++j)
				v.push_back(i - 4000);
			if (sort[i] > freq)
				freq = sort[i];
		}
	}
	for (int i = 0; i <= 8000; ++i)
	{
		if (sort[i] == freq)
		{
			v2.push_back(i - 4000);
			if (v2.size() == 2)
				break;
		}
	}

	double mean = (double)sum / num;
	int center = v[v.size() / 2];
	double r = round(mean);
	if (r == -0)
		r = 0;
	int min = v.front();
	int max = v.back();
	int range = max - min;

	cout << r << "\n";
	cout << center << "\n";
	if(v2.size() == 1)
		cout << v2[0] << "\n";
	else
		cout << v2[1] << "\n";
	cout << range << "\n";
	return 0;
}