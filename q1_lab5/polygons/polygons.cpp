#include <iostream>
#include "polygons_and_points.h"
#include <math.h>

//Polygon
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

//Triangle
float triangle::calcArea(){
    auto semiPerimeter = (length1 + length2 + length3)/2;
    auto area = sqrt(semiPerimeter*(semiPerimeter - length1)*(semiPerimeter - length2)*(semiPerimeter-length3));
    return area;
}

float triangle::calcPerimeter(){
    auto perimeter = length1 + length2 + length3;
    return perimeter;
}

bool triangle::isRightTriangle(){
    auto a = pow(length1, 2);
    auto b = pow(length2, 2);
    auto c = pow(length3,2);
    
    if (a > b and a > c) {
        if (a = b + c){
            return true;
        }
    }

    else if (b > a and b > c){
        if (b = a + c)
        {
            return true;
        }
    }
    else if (c > a and c > b){
        if (c = b + a){
            return true;
        }
    }

    return false;
}

void triangle::setCentroid(const int x, const int y){
    centroid.x = x;
    centroid.y = y;
}

void triangle::display()
{
    std::cout << "(" << centroid.x << " , " << centroid.y << ")" << std::endl;
    std::cout << "Length1: " << length1 << " , Length2: " << length2 << "Length3: " << length3 << std::endl;
    std::cout << "No. of sides: " << numOfSides << std::endl;
}

//Rectangle
float rectangle::calcArea()
{
    auto area = length * breadth;     
    return area;
}

float rectangle::calcPerimeter()
{
    auto perimeter = 2*(length + breadth);
    return perimeter;
}

void rectangle::setCentroid(const int x, const int y)
{
    centroid.x = x;
    centroid.y = y;
}

void rectangle::display()
{
    std::cout << "(" << centroid.x << " , " << centroid.y << ")" << std::endl;
    std::cout << "Length: " << length << "Breadth: " << breadth << std::endl;
    std::cout << "No. of sides: " << numOfSides << std::endl;
}
