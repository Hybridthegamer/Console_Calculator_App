// Console_Calculator_App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    //intro

    for (int i = 0; i < 49; i++)
    {
        std::cout << '*';
    }

    std::cout << "\n";
    std::cout << "\t\t\tBASIC CALCULATOR APP.\n";

    for (int j = 0; j < 49; j++)
    {
        std::cout << '*';
    }

    std::cout << "\n";

    std::cout << "Enter two numbers and an operation e.g:a+b, a-b, a*b, a/b.\n";

    
    //operation begins

    char ops;
    char reply;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;

    Calculator call;  //i'm an object of class calculator

    while (true)
    {
        std::cin >> x >> ops >> y;


        if (ops == '/' && y == 0)
        {
            std::cout << "Error: Division by zero exception.";
            continue;
        }


        result = call.calculate(x, ops, y);
        std::cout << x << ops << y << "= " << result;
        std::cout << "\n";

        std::cout << "Do you want to continue? Y/N";
        std::cin >> reply;

        if (reply == 'y' || reply == 'Y')
        {
            continue;
        }
        else if (reply == 'n' || reply == 'N')
        {
            break;
        }
        else
        {
            std::cout << "invalid token, i will continue. Enter two numbers && an operation e.g:a+b, a-b, a*b, a/b.\n";
        }
    }
    
    return 0;
}
