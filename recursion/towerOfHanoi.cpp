#include<iostream>
using namespace std;

void toh(int n,int src,int help,int dest){
    if(n==1){
        cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    toh(n-1,src,dest,help);
    cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,help,src,dest);
}

int main(){
    int n=4;
    int src=1,help=2,dest=3;
    toh(n,src,help,dest);
}