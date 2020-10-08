#include <iostream>
#include "vector.h"

void vector::operator-(){
    i = -i, j = -j, k = -k;
}

void vector::printVector(){
    std::cout << "[" << i << " , " << j << " , " << k << "]"<<std::endl;
}

