#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str,subStr;
    cout<<"Enter two strings"<<endl;
    getline(cin,str);
    getline(cin,subStr);
    vector<int>lps(subStr.size(),0);
    int first =0,second=0,prefix=0,suffix=1;

    while(suffix<subStr.size()){
        if(subStr[prefix]==subStr[suffix]){
            lps[suffix]=prefix+1;
            prefix++;
            suffix++;
        }else{
            if(prefix==0){
                lps[suffix]=0;
                suffix++;
            }
            else{
                prefix= lps[prefix-1];
            }
        }
    }

    while(second<subStr.size() &&  first<str.size()){
        if(subStr[second]==str[first]){
            second++;
            first++;
        }
        else{
            if(second==0){
                first++;
            }else{
                second = lps[second-1];
            }
        }
    }
    cout<<first<<" "<<second;
    cout<<"Answer is "<<first-second;
}