#include<bits/stdc++.h>
using namespace std;

void upper(string &s,int index){
    if(index == -1){
        return;
    }
    if(s[index]>=97 && s[index]<=122){
        int value = s[index]-97;
        s[index]= char(value+65);
    }
    upper(s,index-1);
}

int main(){
    string s = "uAjtEg";
    upper(s,5);
    cout<<s<<endl;
}