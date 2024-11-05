#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string"<<" ";
    getline(cin,s);
    vector<int>arr(26,0);
    int trueLength=0,index,length=0;
    string ans="",trueAns="";
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            index=s[j]-'a';
            if(arr[index]<1){
                arr[index]++;
                length++;
                ans=ans+s[j];
            }else{
                if(trueLength<length) trueLength=length;
                if(ans.size()==trueLength) trueAns=ans; 
                length=0;
                ans="";
                fill(arr.begin(),arr.end(),0);
                break;
            }
        }
    }
    cout<<trueLength<<" ";
    cout<<trueAns;

}