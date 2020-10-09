#include <iostream>
#include "polygons_and_points.h"

int main()
{
    polygon p1(3, 5, 5);
    p1.display();
    p1.move(2, 0);
    p1.display();

    triangle t1(5, 5);
    t1.display();
    t1.move(5, 5);
    t1.display();

    rectangle r1(10, 10);
    r1.display();
    r1.move(5, 5);
    r1.display();
}
