#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout<<"This is a vehicle"<<endl;
        }
};


class Fare{
    public:
        Fare(){
            cout<<"Fare of vehicle"<<endl;
        }
};

class Bus: public Vehicle,public Fare{

};

int main(){
    Bus obj1;
}