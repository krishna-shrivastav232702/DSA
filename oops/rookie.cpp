#include<iostream>
using namespace std;

class myClass{
    int a;
    public:
    // void set_a(int num){
    //     a=num;
    // }
    // int get_a(){
    //      return a;
    // }
    void set_a(int num);
    int get_a();
};

void myClass::set_a(int num){
    a=num;
}
int myClass::get_a(){
    return a;
}

int main(){
    myClass ob1,ob2;
    ob1.set_a(10);
    ob2.set_a(99);
    cout<<ob1.get_a()<<"\n";
    cout<<ob2.get_a()<<"\n";
}