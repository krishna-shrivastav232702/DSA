#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout << "This is base function" << endl;
    }
    virtual void fun1() = 0;
};

class derived : public base
{
public:
    void fun()
    {
        cout << "This is derived class" << endl;
    }
    void fun1(){}
};

int main(){
    base *p;
    derived d;
    p=&d;
    p->fun();
    p->base::fun();
    return 0;
}