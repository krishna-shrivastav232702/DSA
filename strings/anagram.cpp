#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    vector<int>arr(26,0);
    for(char ch:str1){
        int index = ch-'a';
        arr[index]++;
    }
    for(char ch:str2){
        int index = ch - 'a';
        arr[index]++;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2 != 0){
            return -1;
        }
    }
    return 1;
}