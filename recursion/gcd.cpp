#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}

int main(){
    int x,y;
    cout<<"Enter value of x and y"<<endl;
    cin>>x>>y;
    x>y? cout<<gcd(y,x) :cout<<gcd(x,y);
}