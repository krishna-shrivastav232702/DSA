#include<iostream>
using namespace std;

class Base{
    public:
    virtual void func(){
        cout<<"This is base class function"<<endl;
    }
};

class Derived1 : public Base{
    public:
    void func(){
        cout<<"This is derived class func"<<endl;
    }
};


class Derived2 : public Base{
    public:
    void func(){
        cout<<"This is derived 2 class func"<<endl;
    }
};

int main(){
    Base *p,b;
    Derived1 d1;
    Derived2 d2;
    p=&b;
    p->func();
    p=&d1;
    p->func();
    p=&d2;
    p->func();
}