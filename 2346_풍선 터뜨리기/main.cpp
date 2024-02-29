#include <iostream>
#include <deque>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

	int n;
	std::deque<std::pair<int, int>> dq;
    
	std::cin >> n;
	for (int i = 0; i < n; i++) 
	{
		int tmp;
		std::cin >> tmp;
		dq.push_back(std::make_pair(tmp, i + 1));
	}

	while (true) 
	{
		int cnt = dq.front().first;
		std::cout << dq.front().second << " ";
		dq.pop_front();
		if (dq.empty()) break;
		if (cnt > 0) 
		{
			for (int i = 0; i < cnt - 1; i++) 
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else 
		{
			for (int i = cnt; i < 0; i++) 
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}
