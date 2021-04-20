#include <iostream>
using namespace std;

//class Mother
//{
//public:
//    int m_i;
//
//    Mother(const int& i_in = 0)
//        : m_i(i_in)
//    {
//        cout << "Mother construction" << endl;
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
//        : Mother(1024), m_d(1.0) // Mother() 가 숨어있는 것!!
//    {
//        // m_i = 1024;
//        cout << "Child construction" << endl;
//    }
//};

class A
{
public:
    A()
    {
        cout << "A CONSTRUCTOR" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B CONSTRUCTOR" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C CONSTRUCTOR" << endl;
    }
};

int main()
{
    //Child c1;
    C c;

    return 0;
}