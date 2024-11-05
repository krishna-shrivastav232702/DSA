#include<iostream>
using namespace std;

class rectangle{
    int l,b;
    public:
    void get_data();
    void area();

};

void rectangle::get_data(){
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>l;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>b;
}

void rectangle::area(){
    cout<<"Area of rectangle is "<<l*b;
}

int main(){
    rectangle r;
    r.get_data();
    r.area();
    return 0;
}