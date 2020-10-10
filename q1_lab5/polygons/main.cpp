#include <iostream>
#include "polygons_and_points.h"

int main()
{   
    //Polygon
    polygon p1(3, 5, 5);
    p1.display();
    p1.move(2, 0);
    p1.display();
    std::cout << std::endl;

    //Triangle
    triangle t1(3,4,5);
    std::cout << t1.calcArea() << std::endl;
    std::cout << t1.calcArea() << std::endl;
    t1.setCentroid(5,5);
    t1.move(5, 5);
    t1.display();
    std::cout << std::endl;

    //Rectangle
    rectangle r1(10, 10);
    std::cout << r1.calcArea() << std::endl;
    std::cout << r1.calcArea() << std::endl;
    r1.setCentroid(10, 10);
    r1.display();
    r1.move(5, 5);
    r1.display();
}
