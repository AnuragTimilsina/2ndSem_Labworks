#include "vector.h"
#include <iostream>

int main()
{
        vector one;
        vector two;

        std::cout << "first Vector:";
        int Row1 = one.setRows();

        std::cout << "first Vector:";
        int Col1 = one.setColumns();

        std::cout << "second Vector:";
        int Row2 = two.setRows();

        std::cout << "second Vector:";
        int Col2 = two.setColumns();

        std::cout << "Enter the elements for Vector one:";
        std::cin >> one;
        std::cout << "Enter the elements for Vector two:";
        std::cin >> two;
        std::cout << std::endl;

        if (Row1 == 1 && Col1 >= 1)
        {
                std::cout << "vector one is row vector." << std::endl;
        }
        if (Row1 >= 1 && Col1 == 1)
        {
                std::cout << "vector one is column vector." << std::endl;
        }
        if (Row2 == 1 && Col1 >= 1)
        {
                std::cout << "vector two is row vector." << std::endl;
        }
        if (Row2 >= 1 && Col2 == 1)
        {
                std::cout << "vector two is column vector." << std::endl;
        }

        //assignment and comparision operators
        if (one == two)
        {
                std::cout << "Vector one is equal to Vector two." << std::endl;
        }
        else if (one > two)
        {

                std::cout << "Vector One is greater than Vector two." << std::endl;
        }
        else
        {
                std::cout << "Vector two is greater than Vector one." << std::endl;
        }
        //plus and minus operators called
        if (Row1 == Row2 && Col1 == Col2)
        {
                vector add = one + two;
                std::cout << "Vector Addition is= " << add << std::endl;
                vector sub = one - two;
                std::cout << "Vector Substraction= " << sub << std::endl;
        }
        else
        {
                std::cout << std::endl;
                std::cout << "Addition and substraction of row-column or column-row vector is not possible." << std::endl;
        }

        //multiply operator called.
        if (Col1 == Row2 && Col2 == Row1)
        {
                std::cout << std::endl;
                vector product = one * two;
                std::cout << "Vector multiplication= " << product << std::endl;
        }
        else
        {
                std::cout << std::endl;
                std::cout << "multiplication of row-row or column-column vector is not possible." << std::endl;
        }
        //copy assignment operator called
        std::cout << std::endl;
        vector a;
        a = one;
        a += two;
        std::cout << "Vector for copy assignment operator is:" << a << std::endl;
        std::cout << std::endl;
}