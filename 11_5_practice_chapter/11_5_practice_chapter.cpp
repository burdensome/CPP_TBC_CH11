#include <iostream>
using namespace std;

class Base
{
public:
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};

class Derived : private Base
{
public:
    Derived()
    {
        Base::m_public;
        Base::m_protected;
       
    }
};

class GrandChild : public Derived
{
public:
    GrandChild()
    {
        Derived::m_protected;
    }
};

int main()
{
    Base base;
    base.m_public;


    Derived derived;
    derived.m_public = 1024;

    return 0;
}