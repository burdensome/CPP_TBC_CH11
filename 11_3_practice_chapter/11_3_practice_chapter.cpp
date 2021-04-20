#include <iostream>
using namespace std;

//class Mother
//{
//private:
//    int m_i;
//
//public:
//    Mother(const int& i_in = 0)
//        : m_i(i_in)
//    {
//        cout << "mother nstructor" << endl;
//    }
//
//    void setValue(const int& i_in)
//    {
//        m_i = i_in;
//    }
//
//    int getValue()
//    {
//        return m_i;
//    }
//};
//
//class Child : public Mother
//{
//public:
//    double m_d;
//
//public:
//    Child()
//        : m_d(1.0), Mother(1024)
//    {
//        cout << "Child construction" << endl;
//    }
//};

class A
{
public:
    A()
    {
        cout << "A constructor" << endl;
    }
    
    ~A()
    {
        cout << "A destructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B constructor" << endl;
    }

    ~B()
    {
        cout << "B destructor" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C constructor" << endl;
    }
    ~C()
    {
        cout << "C destructor" << endl;
    }
};

int main()
{
    C c;

    return 0;
}