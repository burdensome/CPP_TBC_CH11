#include <iostream>
using namespace std;

class Mother
{
private:
//protected:
    int m_i;

public:
    Mother()    // Default 생성자 
        : m_i(0)
    {}

    Mother(const int& i_in)
        : m_i(i_in)
    {
        std::cout << "Mother constructor" << std::endl;
    }

    void setValue(const int& i_in)
    {
        m_i = i_in;
    }

    int getValue()
    {
        return m_i;
    }
};

class Child : public Mother // derived class라고도하고 Mother는 generalize class --> Derived from mother class
{
private:
    double m_d;

public:
    Child(const int& i_in, const double& d_in)  // constructor는 메모리가 할당 되기 전에 생성자가 나오는 것이니..
    //    : m_i(i_in), m_d(d_in) -> initial lizer list를 안쓰고
        : Mother(i_in), m_d(d_in)
    {
        /*Mother::setValue(i_in);
        m_d = d_in;*/
    }

    void setValue(const int& i_in, const double& d_in)
    {
        Mother::setValue(i_in);
        m_d = d_in;
    }

    void setValue(const double& d_in)
    {
        m_d = d_in;
    }

    double getValue()
    {
        return m_d;
    }
};



int main()
{
    Mother mother(1024);
    //mother.setValue(1024);
    cout << mother.getValue() << endl;

    Child child(1234,128);
    /*child.Mother::setValue(1024);
    child.setValue(128);*/
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;

    return 0;
}