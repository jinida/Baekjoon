#include <iostream>
#include <queue>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::priority_queue<int, std::vector<int>, std::greater<int>> prior_min;
    std::priority_queue<int> prior_max;
    int cnt, num, size = 0;
    std::cin >> cnt;
    std::cin >> num;
    prior_max.push(num);
    std::vector<int> v;
    for (int i = 1; i < cnt; ++i)
    {
        v.push_back(prior_max.top());
        std::cin >> num;
        if (prior_max.size() > prior_min.size())
            prior_min.push(num);
        else
            prior_max.push(num);

        if (prior_max.top() > prior_min.top())
        {
            int max = prior_max.top();
            int min = prior_min.top();
            prior_max.pop();
            prior_min.pop();
            prior_max.push(min);
            prior_min.push(max);
        }
    }
    v.push_back(prior_max.top());
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << "\n";
    }
}