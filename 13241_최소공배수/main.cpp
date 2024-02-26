#include <iostream>
#include <numeric>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long num1, num2;
    std::cin >> num1 >> num2;
    std::cout << std::lcm(num1, num2);
}
