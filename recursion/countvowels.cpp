#include<bits/stdc++.h>
using namespace std;

// int countvowels(string s,int index,int n,int count){
//     if(index==n){
//         return count;
//     }
//     if(s[index]=='a'|| s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u'){
//         count=count+1;
//     }
//     return countvowels(s,index+1,n,count);
// }

// int main(){
//     string s ="krishna";
//     int ans = countvowels(s,0,7,0);
//     cout<<ans<<"\n";
// }


int count(string s,int index){
    if(index==-1){
        return 0;
    }
    if(s[index]=='a'|| s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u'){
        return 1+count(s,index-1);
    }else{
        return count(s,index-1);
    }   
}

int main(){
    string s = "aeous";
    int ans = count(s,5);
    cout<<ans<<"\n";
}