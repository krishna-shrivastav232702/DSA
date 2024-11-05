#include<iostream>
using namespace std;

class ise{
    public:
    string NMIT;
    void printName(){
        cout<<"Full name of nmit is "<<NMIT;
    }
};

int main(){
    ise obj1;
    obj1.NMIT="Nitte Meenakshi Institute of Technology";
    obj1.printName();
    return 0;
}