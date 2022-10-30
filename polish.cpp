#include <iostream>

int main()
{
    bool i = true;
    float Answer;
    char Operator;
    float Number1;
    float Number2;
    

    do
    {
        std::cout << "Enter the expression: ";
        std::cin >> Operator;
        std::cin >> Number1;
        std::cin >> Number2;
    
        switch (Operator)
        {
            case '*':
            Answer = Number1 * Number2;
            std::cout << Number1 << " " << Operator << " " << Number2 << " " << "=" << " " << Answer << std::endl;
            break;
        
            case '+':
            Answer = Number1 + Number2;
            std::cout << Number1 << " " << Operator << " " << Number2 << " " << "=" << " " << Answer << std::endl;
            break;

            case '-':
            Answer = Number1 - Number2;
            std::cout << Number1 << " " << Operator << " " << Number2 << " " << "=" << " " << Answer << std::endl;
            break;

            case '/':
            Answer = Number1 / Number2;
            std::cout << Number1 << " " << Operator << " " << Number2 << " " << "=" << " " << Answer << std::endl;
            break;

            case 'q':
            i = true;
            return 0;
            break;

        }   
        
    } 
    while (i == true);
}