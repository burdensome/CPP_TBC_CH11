#include <iostream>
using namespace std;

class Mother
{
private:    
    int m_i;

public:    
    Mother()
        : m_i(0)
    {

    }
    Mother(const int& i_in)
    {
        m_i = i_in;
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


class Child : public Mother
{
private:
    double m_d;

public:
    Child(const int& i_in, const double& d_in)
        : Mother(i_in), m_d(d_in)
    {        
    }

    void setValue(const int& i_in, const double& d_in)
    {
        //m_i = i_in;        
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
    Mother mother;
    mother.setValue(1024);
    cout << mother.getValue() << endl;

    Child child(1024, 128);
    /*child.Mother::setValue(1024);
    child.setValue(128);*/
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;



    return 0;
}