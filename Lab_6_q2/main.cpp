#include <iostream>
#include "vector.h"

int main()
{       
        std::cout << "enter fist vector";
        vector v1;
        std::cin >> v1;
        
        -v1;
        std::cout << v1<<std::endl;

        std::cout << "enter second vector";
        vector v2;
        std::cin >> v2;

        vector v3 = v1 + v2;
        std::cout << v3<<std::endl;

        v3 = v1 - v2;
        std::cout << v3<<std::endl;

        v3 = v1 * v2;
        std::cout << v3<<std::endl;

        v3 += v1;
        std::cout << v3<<std::endl;

        std::cout << (v1 == v2)<<std::endl;
        std::cout << (v1 > v2)<<std::endl;
}

