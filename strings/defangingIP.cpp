#include<iostream>
#include<string>
using namespace std;

int main(){
    string address;
    cout<<"Enter an IP address:"<<" ";
    getline(cin,address);
    int index=0;
    string ans;
    while(index<address.size()){
        if(address[index]=='.'){
            ans = ans+"[.]";
        }
        else{
            ans=ans+address[index];
        }
        index++;
    }
    cout<<"Your new IP address is: "<<ans<<endl;

}