#include <iostream>
using namespace std;
main()
{
    int a = 5;
    int &b = a;
    int &c = b;
    cout << a << b << c << endl;
    a++;
    b--;
    cout << a << b << c;
}