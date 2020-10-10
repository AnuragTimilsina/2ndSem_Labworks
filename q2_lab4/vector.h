#pragma once
#include <iostream>

class vector
{
    float i, j, k;

public:
    int rows, columns;
    vector() : i(0), j(0), k(0) {}

    vector(const float i, const float j, const float k) : i(i), j(j), k(k) {}
    int setRows()
    {
        std::cout << "Number of rows:" << std::endl;
        std::cin >> this->rows;

        return this->rows;
    }

    int setColumns()
    {
        std::cout << "Number of columns:" << std::endl;
        std::cin >> this->columns;

        return this->columns;
    }

    double get_i()
    {
        return this->i;
    }
    double get_j()
    {
        return this->j;
    }
    double get_k()
    {
        return this->k;
    }

    vector operator-(const vector &);
    vector operator+(const vector &);
    vector operator*(const vector &);
    void operator+=(const vector &);
    bool operator==(const vector &);
    bool operator>(const vector &);
    friend std::ostream &operator<<(std::ostream &outputStream, const vector &);
    friend std::istream &operator>>(std::istream &inputStream, vector &);
};