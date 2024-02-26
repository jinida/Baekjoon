#include <iostream>
#include <numeric>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase;
    std::cin >> testCase;
    int* treePositions = new int[testCase];
    std::cin >> treePositions[0] >> treePositions[1];

    int minInterval = treePositions[1] - treePositions[0];
    for (int i = 2; i != testCase; ++i)
    {
        std::cin >> treePositions[i];
        minInterval = std::gcd(minInterval, treePositions[i] - treePositions[i - 1]);
    }

    int result = 0;
    for (int i = 1; i != testCase; ++i)
    {
        result += (treePositions[i] - treePositions[i - 1]) / minInterval - 1;
    }
    std::cout << result;
}
