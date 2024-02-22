#include <iostream>

int main()
{
    int degree1, degree2, degree3;
    std::cin >> degree1 >> degree2 >> degree3;
    bool isEquilateral = degree1 == degree2 && degree2 == degree3 && degree1 == 60;
    if (isEquilateral)
    {
        std::cout << "Equilateral";
    }
    else if (degree1 + degree2 + degree3 == 180 && ((degree1 == degree2) || (degree2 == degree3) || (degree1 == degree3)))
    {
        std::cout << "Isosceles";
    }
    else if (degree1 + degree2 + degree3 == 180 &&
        ((degree1 != degree2) && (degree2 != degree3) && (degree1 != degree3)))
    {
        std::cout << "Scalene";
    }
    else if (degree1 + degree2 + degree3 != 180)
    {
        std::cout << "Error";
    }
}
