#pragma once

class vector {
    float i,j,k;
    public: 
        vector(): i(0),j(0),k(0) {}

        vector(const float i, const float j, const float k):
            i(i),j(j),k(k) {}

        void printVector();
        void operator-();

};

