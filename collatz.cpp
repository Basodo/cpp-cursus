#include <iostream>

int main()
{
    int i = 0;
    int Collatz;
    std::cout << "Enter the first number of the sequence: ";
    std::cin >> Collatz;
    std::cout << Collatz << " ";

    if (Collatz == 1)
    {
        i = i+1;
    }

    do
    {
        if (Collatz%2 == 0)
        {
           Collatz = Collatz/2;

           std::cout << Collatz << " ";

        }
        else
        {
            Collatz = (3*Collatz)+1;
            
            std::cout << Collatz << " ";
        }
       
        if (Collatz == 1)
        {
            i = i+1;
        }

        if (i == 3)
        {
            std::cout << "...";
        }
    }
    while (i < 3);
    
}