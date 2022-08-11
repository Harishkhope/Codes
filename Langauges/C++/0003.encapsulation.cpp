#include <iostream>
using namespace std;

class A
{
public:
    void Afun(void);
};

void A::Afun(void)
{
    cout << "im the body of Afun()....." << endl;
}

class B : public A
{
public:
    void Bfun(void);
};

void B::Bfun(void)
{
    cout << "im the body of Bfun()....." << endl;
}

int main()
{
    B objB;
    objB.Afun();
    objB.Bfun();
    return 0;
}