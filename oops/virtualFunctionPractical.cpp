#include<iostream>
using namespace std;

class convert{
    protected:
    double val1;
    double val2;
    public:
    convert(double i){
        val1=i;
    }
    double getconv(){
        return val2;
    }
    double getinit(){
        return val1;
    }
    virtual void compute()=0;
};

class liter_to_gallon:public convert{
    public:
    liter_to_gallon(double i):convert(i){
    }
    void compute(){
        val2=val1/3.7854;
    }
};

class f_to_c:public convert{
    public:
    f_to_c(double i):convert(i){}
    void compute(){
        val2=(val1-32)/1.8;
    }
};

int main(){
    convert *p;
    liter_to_gallon lgob(4);
    f_to_c fcob(70);
    p=&lgob;
    cout<<p->getinit()<<" "<<"liter is"<<" ";
    p->compute();
    cout<<p->getconv()<<" "<<"gallons"<<endl;
    p=&fcob;
    cout<<p->getinit()<<" "<<"in fahrenheit"<<" ";
    p->compute();
    cout<<p->getconv()<<" "<<"celsius"<<endl;
}