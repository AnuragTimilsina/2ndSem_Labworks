#include <iostream>
#include "polygons_and_points.h"


 void polygon::move(int X, int Y)
{
    this->centroid.x += X;
    this->centroid.y += Y;
}


void polygon::display()
{
    std::cout << "(" << centroid.x << " , " << centroid.y << ")" << std::endl;
    std::cout << "No. of sides: " << numOfSides << std::endl;
}



