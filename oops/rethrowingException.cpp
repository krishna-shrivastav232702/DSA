#include<iostream>
using namespace std;

void Xhandler(){
    try{
        throw "hello";
    }catch(const char *){
        cout<<"Caught char * inside Xhandler"<<endl;
        throw ;
    }
}

int main(){
    cout<<"Start"<<endl;
    try{
        Xhandler();
    }catch(const char *){
        cout<<"caught char * inside main"<<endl;
    }
    cout<<"End"<<endl;
}