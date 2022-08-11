#include <iostream>
using namespace std;
float area(float m, float n)
{
    float a = m * n;
    return a;
}
float perimetre(float m, float n)
{
    float p = 2 * (m + n);
    return p;
}
main()
{
    float m, n;
    cout << "enter the length and bredth" << endl;
    cin >> m >> n;
    float z1 = area(m, n);
    float z2 = perimetre(m, n);
    cout << "area is" << z1 << endl;
    cout << "perimetre is" << z2 << endl;
}