#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout<<"this is vehicle constructor"<<endl;
        }
};

class Car : public Vehicle{

};

class Bus : public Vehicle{

};

int main(){
    Car obj1;
    Bus obj2;
}