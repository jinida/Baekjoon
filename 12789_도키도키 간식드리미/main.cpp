#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase;
    std::cin >> testCase;

    int ticket, start = 1;
    std::stack<int> tickets;
    bool flag = true;
    for (int i = 0; i != testCase; ++i)
    {
        std::cin >> ticket;
        if (ticket != start)
        {
            if (!tickets.empty() && tickets.top() - ticket < 0)
            {
                flag = false;
                break;
            }
            tickets.push(ticket);
        }
        else
        {
            ++start;
            while (!tickets.empty() && tickets.top() == start)
            {
                tickets.pop();
                ++start;
            }
        }
    }
    if (flag)
    {
        std::cout << "Nice";
    }
    else
    {
        std::cout << "Sad";
    }
}
