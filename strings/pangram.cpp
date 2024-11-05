#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string to check whether its a pangram or not"<<endl;
    getline(cin,s);

    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        int index = static_cast<int>(s[i])-97;
        if(arr[index]==0){
            arr[index]=1;
        }
    }
    int flag=0;
    for(int i=0;i<26;i++){
       if(arr[i]==0){
        flag=1;
       }
    }
     if(flag==1){
            cout<<"String is not a pangram"<<endl;

        }
        else{
            cout<<"String is a pangram"<<endl;
        }

}