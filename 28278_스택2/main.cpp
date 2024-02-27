#include <iostream>
#include <stack>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase;
    std::cin >> testCase;

    std::stack<int> st;

    int numHandle, numInput;
    for (int i = 0; i != testCase; ++i)
    {
        std::cin >> numHandle;
        
        switch (numHandle)
        {
        case 1:
            std::cin >> numInput;
            st.push(numInput);
            break;
        case 2:
            if (st.empty())
            {
                std::cout << -1 << "\n";
            }
            else
            {
                std::cout << st.top() << "\n";
                st.pop();
            }
            break;
        case 3:
            std::cout << st.size() << "\n";
            break;
        case 4:
            if (st.empty())
            {
                std::cout << 1 << "\n";
            }
            else
            {
                std::cout << 0 << "\n";
            }
            break;
        default:
            if (st.empty())
            {
                std::cout << -1 << "\n";
            }
            else
            {
                std::cout << st.top() << "\n";
            }
            break;
        }
    }
}
