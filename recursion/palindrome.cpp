#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int front,int rear){
    if(front>=rear){
        return 1;
    }
    if(s[front]==s[rear]){
        return checkPalindrome(s,front+1,rear-1);
    }else{
        return 0;
    }
}

int main(){
    string s = "h";
    bool ans = checkPalindrome(s,0,0);
    cout<<ans<<"\n";
}