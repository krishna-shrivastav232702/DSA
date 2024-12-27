#include<iostream>
using namespace std;

template<class Type1,class Type2> class myClass{
    Type1 i;
    Type2 j;
    public:
        myClass(Type1 a,Type2 b){
            i=a;
            j=b;
        }
        void show(){
            cout<<i<<" "<<j<<"\n";
        }
};

int main(){
    myClass<int,double>ob1(10,0.23);
    myClass<char,char *>ob2('X',"Templates add power");
    ob1.show();
    ob2.show();
}