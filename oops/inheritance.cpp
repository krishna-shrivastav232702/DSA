#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void set_a(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
        }
};

class B:public A{
    protected:
        int b;
    public:
        void set_b(){
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }       
};

class C : public B{
    protected:
        int c,p;
    public:
        void set_c(){
            cout<<"Enter the value of c"<<endl;
            cin>>c;
        }
        void calc_product(){
            p=a*b*c;
            cout<<"Value of p is "<<p;
        }
};

int main(){
    C obj;
    obj.set_a();
    obj.set_b();
    obj.set_c();
    obj.calc_product();
}