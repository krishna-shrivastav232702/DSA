#include<iostream>
using namespace std;

template<class X>void swap1(X &a,X &b){
    X temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside template swap"<<endl;
}

void swap1(int &a,int &b){
    cout<<"Inside integer function"<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int i=10,j=20;
    double x=30,y=40;
    char a='x',b='y';
    cout<<"original i,j:"<<i<<" "<<j<<endl;
    cout<<"original x,y:"<<x<<" "<<y<<endl;
    cout<<"original a,b:"<<a<<" "<<b<<endl;
    swap1(i,j);
    swap1(a,b);
    swap1(x,y);
    cout<<"Swapped i,j "<<i<<" "<<j<<endl;
    cout<<"Swapped x,y "<<x<<" "<<y<<endl;
    cout<<"Swapped a,b "<<a<<" "<<b<<endl;
}