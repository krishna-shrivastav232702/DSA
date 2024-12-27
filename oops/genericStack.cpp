#include<iostream>
using namespace std;

const int SIZE = 10;

template<class StackType>class stack{
    StackType stck[SIZE];
    int tos;
    public:
        stack(){
            tos=0;
        }
        void push(StackType ob);
        StackType pop();
};

template <class StackType> void stack<StackType>::push(StackType ob){
    if(tos==SIZE){
        cout<<"Stack is full\n";
        return ;
    }
    stck[tos]=ob;
    tos++;
}

template<class StackType> StackType stack<StackType>::pop(){
    if(tos==0){
        cout<<"Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack<char> s1,s2;
    int i;
    s1.push('a');
    s2.push('x');
    s1.push('y');
    s2.push('b');
    s1.push('c');
    s2.push('d');
    for(i=0;i<3;i++) cout<<"pop s1:"<<s1.pop()<<"\n";
    for(i=0;i<3;i++) cout<<"pop s2:"<<s2.pop()<<"\n";
    stack<double> ds1,ds2;
    ds1.push(1.1);
    ds2.push(2.2);
    ds1.push(3.3);
    ds2.push(4.4);
    ds1.push(5.5);
    ds2.push(6.6);
    for(i=0;i<3;i++) cout<<"pop ds1: "<<ds1.pop()<<"\n";
    for(i=0;i<3;i++) cout<<"pop ds2: "<<ds2.pop()<<"\n";
    return 0;
}