#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,ans="";
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int arr[26]={0};
    
    for(int i=0;i<s.size();i++){
        int index= static_cast<int>(s[i])-97;
        arr[index]+=1;
    }

    for(int i=0;i<26;i++){
        while(arr[i]>0){
            ans=ans+(char)(i+97);
            arr[i]--;
        }
    }

    cout<<ans;
}