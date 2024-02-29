#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int num;
    std::cin >> num;

    int* fibArr = new int[num];
    fibArr[0] = fibArr[1] = 1;
    for (int i = 2; i != num; ++i)
    {
        fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
    }

    std::cout << fibArr[num - 1] << " " << num - 2;
}
