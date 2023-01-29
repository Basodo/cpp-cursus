#include <iostream>
#include <cmath>

float x,x1,x2;
float a;
float b;
float c;
float solution;

int main()
{

    try {
        std::cout << "Please enter the values of a, b, and c:";
        std::cin >> a >> b >> c;

        if (std::cin.fail()) {
            throw std::runtime_error("Malformed user input");
        }

        if (a == 0){
            throw std::runtime_error("a must not be zero");
        }

        for (int i = 1; i <= 10; ++i);
        {
            if ((b * b - 4 * a * c) > 0)
            {
                x1 = (-b + sqrt((b*b) -  4*a*c))/(2*a);
                x2 = (-b - sqrt((b*b) -  4*a*c))/(2*a);
                std::cout << "There are 2 solutions." << std::endl;
                std::cout << "The solutions are: " << x1 << " and "<< x2;
            } 
            else if ((b * b - 4 * a * c) == 0)
            {
                x = (-b + sqrt((b*b) -  4*a*c))/(2*a);
                std::cout << "There is 1 solution." << std::endl;
                std::cout << "The solution is: " << x;
            }
            else if (((b * b - 4 * a * c) < 0))
            {
                
                std::cout << "There is no solution.";

            }
        }

        return (0);
    }catch (std::runtime_error error) {
        std::cout << "An error occurred: " << error.what();
        return 0;
    }
}
