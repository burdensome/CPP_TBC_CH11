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
        //Base::m_public; //this->m_public; m_public;
        //Base::m_protected;
        //Base::m_private;
        m_public = 1024;
        m_protected = 2048;
    }
};

class GrandChild : public Derived
{
public:
    GrandChild()
    {
        Derived::m_public;
    }
};

int main()
{
    Derived derived;

    return 0;
}