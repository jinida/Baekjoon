#include <iostream>
#include <numeric>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int numerator1, denominator1;
    int numerator2, denominator2;
    std::cin >> numerator1 >> denominator1;
    std::cin >> numerator2 >> denominator2;
    
    int resultN, resultD;
    
    resultN = numerator1 * denominator2 + numerator2 * denominator1;
    resultD = denominator1 * denominator2;
    int retultGcd = std::gcd(resultD, resultN);
    resultN /= retultGcd;
    resultD /= retultGcd;

    std::cout << resultN << " " << resultD;
}
