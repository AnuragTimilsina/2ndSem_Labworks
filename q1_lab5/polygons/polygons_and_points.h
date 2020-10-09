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
    float area, perimeter;
    triangle(int x, int y)
    {
        this->numOfSides = 3;
        this->centroid.x = x;
        this->centroid.y = y;
    }
};

class rectangle : public polygon
{
    public:
        float area, perimeter;
        rectangle(int x, int y)
        {
            this->numOfSides = 4;
            this->centroid.x = x;
            this->centroid.y = y;
        }
};
