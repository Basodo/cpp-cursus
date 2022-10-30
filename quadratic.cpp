#include <iostream>
#include <cmath>
int main()
{

    float x,x1,x2;
    float a;
    float b;
    float c;
    float solution;


    


    std::cout << "Please enter the values of a, b, and c:";
    std::cin >> a >> b >> c;

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
}
