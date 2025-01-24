#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int front,int rear){
    if(front>=rear){
        cout<<s<<endl;
        return;
    }
    swap(s[front],s[rear]);
    reverse(s,front+1,rear-1);
}

int main(){
    string s = "krishna";
    reverse(s,0,6);
    cout<<s<<endl;
}