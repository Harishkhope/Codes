#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    void area()
    {
        int A = length * breadth;
        cout << "area of rectangle is" << A << endl;
    }

    void perimetre()
    {
        int p = 2 * (length + breadth);
        cout << "perimetre of rectangle is" << p << endl;
    }

    void setDimension(int m, int n)
    {
        length = m;
        breadth = n;
    }
};

int main()
{
    Rectangle a, b;
    a.setDimension(5, 7);
    b.setDimension(10, 20);
    a.area();
    b.perimetre();
    b.area();
}