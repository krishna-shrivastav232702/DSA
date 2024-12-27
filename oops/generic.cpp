#include<iostream>
using namespace std;

template<typename T>
void swap1(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5,b=7;
    cout<<a<<"-"<<b<<endl;
    swap1(a,b); 
    // swap1<int>(a,b);
    cout<<a<<"-"<<b<<endl;
    char c='c',d='d';
    cout<<c<<"-"<<d<<endl;
    swap1(c,d);
    cout<<c<<"-"<<d<<endl;
}