#include <iostream>

int main()
{
    while (1)
    {
        int side1, side2, side3;
        std::cin >> side1 >> side2 >> side3;
        if (side1 == 0 && side2 == 0 && side3 == 0)
        {
            break;
        }

        bool isEquilateral = side1 == side2 && side2 == side3 && side1 != 0;
        if (isEquilateral)
        {
            std::cout << "Equilateral\n";
        }
        else if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2)
        {
            std::cout << "Invalid\n";
        }
        else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
        {
            std::cout << "Isosceles\n";
        }
        else if ((side1 != side2) && (side2 != side3) && (side1 != side3))
        {
            std::cout << "Scalene\n";
        }
    }
}
