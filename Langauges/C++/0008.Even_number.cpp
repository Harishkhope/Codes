#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool even(int num)
{
    if (num < 0)
    {
        return false;
    }
    for (int i = 2; i = sqrt(num); i++)
    {
        if (num % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << " enter a number: ";
    cin >> num;
    if (even(num))
    {
        cout << num << " number is even";
    }
    else
    {
        cout << num << "  is odd";
    }
}