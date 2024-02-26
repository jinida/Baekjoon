#include <iostream>

const int maxPrime = 65326;
bool bPrimes[maxPrime + 1] = { false, };

bool isPrime(unsigned num)
{
    if (num == 1 || num == 0)
    {
        return false;
    }

    for (unsigned i = 2; i * i <= num; ++i)
    {
        if (bPrimes[i] && num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase;
    std::cin >> testCase;

    for (int i = 2; i != maxPrime + 1; ++i)
    {
        if (!bPrimes[i])
        {
            bPrimes[i] = true;
            for (int j = i * 2; j < maxPrime + 1; j += i)
            {
                bPrimes[j] = false;
            }
        }
    }

    unsigned int num;
    for (int i = 0; i != testCase; ++i)
    {    
        std::cin >> num;
        for (; !isPrime(num); ++num);
        std::cout << num << "\n";
    }
}
