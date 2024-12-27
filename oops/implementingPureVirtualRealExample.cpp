#include<iostream>
using namespace std;

class animal{
    public:
    virtual void eat()=0;
};

class cat: public animal{
    public:
    void eat(){
        cout<<"Eating non veg"<<endl;
    }
};

class cow:public animal{
    public:
    void eat(){
        cout<<"Eating veg"<<endl;
    }
};

int main(){
    animal *a = new cat();
    a->eat();
}