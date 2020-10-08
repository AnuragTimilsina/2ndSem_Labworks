#include <iostream>
#include "vector.h"

void vector::operator-(){
    i = -i, j = -j, k = -k;
}

void vector::printVector(){
    std::cout << "[" << i << " , " << j << " , " << k << "]"<<std::endl;
}

vector vector::operator-(const vector &v1){
    vector v;
    v.i = this->i - v1.i;
    v.j = this->j - v1.j;
    v.k = this->k - v1.k;
    return v;
}

vector vector::operator+(const vector &v1)
{
    vector v;
    v.i = this->i + v1.i;
    v.j = this->j + v1.j;
    v.k = this->k + v1.k;
    return v;
}

vector vector::operator*(const vector &v1)
{
    vector v;
    v.i = this->i * v1.i;
    v.j = this->j * v1.j;
    v.k = this->k * v1.k;
    return v;
}

void vector::operator+=(const vector &v1)
{
     this->i +=v1.i;
     this->j +=v1.j;
     this->k +=v1.j;
}

bool vector::operator==(const vector &v1)
{   
    if (this->i == v1.i and this->j == v1.j and this->k == v1.j){
        return true;
    }
    return false;
}

bool vector::operator>(const vector &v1)
{
    if (this->i > v1.i and this->j > v1.j and this->k > v1.j)
    {
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &outputStream, const vector &v)
{
    return outputStream <<"["<<v.i<< " , " <<v.j<<" , "<<v.k<<"]";
}

std::istream &operator>>(std::istream &inputStream, vector &v)
{
    return inputStream >> v.i >> v.j >> v.k;
}
