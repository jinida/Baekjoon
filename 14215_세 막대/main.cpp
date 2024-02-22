#include <iostream>

int main()
{
    int side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;

    bool isEquilateral = side1 == side2 && side2 == side3;
    if (isEquilateral)
    {
        std::cout << side1 + side2 + side3;
    }
    else if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2)
    {
        if (side1 + side2 <= side3)
        {
            std::cout << 2 * (side1 + side2) - 1;
        }
        else if (side2 + side3 <= side1)
        {
            std::cout << 2 * (side2 + side3) - 1;
        }
        else
        {
            std::cout << 2 * (side1 + side3) - 1;
        }
    }
    else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        std::cout << side1 + side2 + side3;
    }
    else if ((side1 != side2) && (side2 != side3) && (side1 != side3))
    {
        std::cout << side1 + side2 + side3;
    }
}

