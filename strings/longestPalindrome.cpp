#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int arr[26]={0},index,count=0,no=0;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        index = s[i]-'a';
        arr[index]+=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]%2==0){
            count = count + arr[i];
        }else{
            no+=1;
            count = count + arr[i]-1;
        }
        
    }
    if(no){
        count=count+1;
    }

    cout<<"The longest palindrome is "<<count;
}