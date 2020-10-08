#pragma once

class vector {
    float i,j,k;
    public: 
        vector(): i(0),j(0),k(0) {}

        vector(const float i, const float j, const float k):
            i(i),j(j),k(k) {}

        void printVector();
        void operator-();
        vector operator-(const vector &);
        vector operator+(const vector &);
        vector operator*(const vector &);
        void operator+=(const vector &);
        bool operator==(const vector &);
        bool operator>(const vector &);
        friend std::ostream &operator<<(std::ostream &outputStream, const vector &);
        friend std::istream &operator>>(std::istream &inputStream, vector &);
};

