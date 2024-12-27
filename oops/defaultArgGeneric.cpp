#include<iostream>
using namespace std;

template<class Type1=string,class Type2=int> class myClass{
    Type1 p1;
    Type2 p2;
    public:
        myClass(Type1 a,Type2 b){
            p1=a;
            p2=b;
        }
        void show(){
            cout<<p1<<" "<<p2<<endl;
        }
};

int main(){
    myClass<> ob1("Pramod",25);
    myClass<float>ob2(24.35,55);
    myClass<int,string>ob3(20,"Jain");
    ob1.show();
    ob2.show();
    ob3.show();
}