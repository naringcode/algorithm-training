#include <iostream>

int main()
{
    double x;
    double y;

    while (true)
    {
        std::cin >> x >> y;
        if (x == 0.0 && y == 0.0)
            break;

        if (x == 0.0 || y == 0.0)
        {
            std::cout << "AXIS\n";
        }
        else if (x > 0.0 && y > 0.0)
        {
            std::cout << "Q1\n";
        }
        else if (x < 0.0 && y > 0.0)
        {
            std::cout << "Q2\n";
        }
        else if (x < 0.0 && y < 0.0)
        {
            std::cout << "Q3\n";
        }
        else
        {
            std::cout << "Q4\n";
        }
    }
    
    std::cout << "AXIS\n";

    return 0;
}