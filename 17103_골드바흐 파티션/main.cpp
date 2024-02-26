#include <iostream>
#include<cstring>

const int maxPrime = 1000000;
bool bPrimes[maxPrime + 1];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::memset(bPrimes, true, sizeof(bPrimes));
    for (int i = 2; i * i <= maxPrime + 1; ++i)
    {
        if (bPrimes[i])
        {
            for (int j = i * i; j <= maxPrime; j += i)
            {
                bPrimes[j] = false;
            }
        }
    }

    int testCase, num, count;
    std::cin >> testCase;
    for (int i = 0; i != testCase; ++i)
    {
        std::cin >> num;
        count = 0;
        for (int j = 2; j != num / 2 + 1; ++j)
        {
            if (bPrimes[j] && bPrimes[num - j])
            {
                ++count;
            }
        }
        std::cout << count << "\n";
    }
}
