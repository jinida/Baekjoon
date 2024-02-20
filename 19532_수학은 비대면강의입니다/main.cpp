#include <iostream>
#include <cmath>

int main()
{
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    float coef = 1.f / (a * e - b * d);
    float x = coef * (e * c - b * f);
    float y = coef * (a * f - d * c);
    
    std::cout << static_cast<int>(std::round(x)) << " " << static_cast<int>(std::round(y));
}
