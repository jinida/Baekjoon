#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int testCase;
    std::cin >> testCase;
    std::cout << static_cast<int>(sqrt(testCase));
}
