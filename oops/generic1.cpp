#include<iostream>
using namespace std;

template<class type1,class type2>
void func(type1 x,type2 y){
    cout<<x<<" "<<y<<endl;
}

int main(){
    func(10,"I like c++");
    func(10,20);
    func("hello","I am krishna");
}