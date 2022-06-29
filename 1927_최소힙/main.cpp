#include <iostream>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::priority_queue<int, std::vector<int>, std::greater<int>> prior_q;

    int cnt, num;
    std::cin >> cnt;
    for (int i = 0; i < cnt; ++i)
    {
        std::cin >> num;
        if (num == 0)
        {
            if (!prior_q.empty())
            {
                std::cout << prior_q.top() << "\n";
                prior_q.pop();
            }
            else
                std::cout << "0\n";
        }
        else
        {
            prior_q.push(num);
        }
    }
}