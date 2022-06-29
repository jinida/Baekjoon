#include <iostream>
#include <queue>
#include <string>
struct cmp
{
    bool operator()(int a, int b)
    {
        if (std::abs(a) == std::abs(b))
        {
            return a > b;
        }
        else
        {
            return std::abs(a) > std::abs(b);
        }
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::priority_queue<int, std::vector<int>, cmp> prior_q;
    
    int cnt, num, val, freq = 0;
    std::cin >> cnt;
    std::string a = "";
    for (int i = 0; i < cnt; ++i)
    {
        std::cin >> num;
        if (num == 0)
        {
            if (!prior_q.empty())
            {
                val = prior_q.top();
                a += (std::to_string(val) + "\n");
                prior_q.pop();
            }
            else
                a += "0\n";
        }
        else
        {
            prior_q.push(num);
        }
    }
    std::cout << a;
}