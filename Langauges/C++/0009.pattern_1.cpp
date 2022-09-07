#include <iostream>
using namespace std;
void exchange(int &p, int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}
main()
{
    int a = 5, b = 7;
    cout << "a=" << a << "b=" << b << endl;
    exchange(a, b);
    cout << "a=" << a << "b=" << b;
}