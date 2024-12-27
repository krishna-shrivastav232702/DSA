#include<iostream>
using namespace std;

class base{
    public:
    virtual void func(){
        cout<<"This is base class"<<endl;
    }
};

class derived1:public base{
    public:
    void func(){
        cout<<"This is derived class"<<endl;
    }
};

class derived2:public base{  //if derived1 then output is this is derived class
    public:
};


int main(){
    base *b,p;
    derived1 d1;
    derived2 d2;
    b=&p;
    b->func();
    b=&d1;
    b->func();
    b=&d2;
    b->func();
}