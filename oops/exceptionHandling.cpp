#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    double bal=1000.0;
    try{
        double amt;
        cout<<"enter deposit amount"<<endl;
        cin>>amt;
        if(amt<=0){
            throw invalid_argument("Invalid deposit amount");
        }
        bal=bal+amt;
        cout<<"Available amount"<<bal<<endl;
        cout<<"Enter withdrawn amount"<<endl;
        cin>>amt;
        if(amt<=0){
            throw invalid_argument("Invalid withdrawn amount");
        }
        if(amt>bal){
            throw runtime_error("insufficient fund");
        }
        bal=bal-amt;
        cout<<"Available amount"<<bal<<endl;
    }catch(exception& e){
        cout<<e.what();
    }
}