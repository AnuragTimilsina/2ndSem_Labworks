class point
{
public:
    int x, y;
    point() : x(0), y(0) {}
    point(int &x, int &y)
    {
        this->x = x;
        this->y = y;
    }
};

class polygon
{
public:
    short numOfSides;
    point centroid;

    polygon()
    {
        numOfSides = 0;
        centroid.x = 0;
        centroid.y = 0;
    }

    polygon(short numOfSides, int x, int y)
    {
        this->numOfSides = numOfSides;
        this->centroid.x = x;
        this->centroid.y = y;
    }

    void move(int X, int Y);

    void display();
};

class triangle : public polygon
{
public:
    float length1, length2, length3;
    float area = 0, perimeter = 0;
    triangle(const float length1,const float length2, const float length3)
    {
        this->numOfSides = 3;
        this->length1 = length1;
        this->length2 = length2;
        this->length3 = length3;
    }
    float calcArea();
    float calcPerimeter();
    bool isRightTriangle();
    void setCentroid(const int x, const int y);
    void display();
};

class rectangle : public polygon
{
    public:
        float length, breadth;
        float area = 0, perimeter = 0;
        rectangle(const float length,const float breadth)
        {
            this->numOfSides = 4;
            this->length = length;
            this->breadth = breadth;
        }
        float calcArea();
        float calcPerimeter();
        void setCentroid(const int x, const int y);
        void display();
};
