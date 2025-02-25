#include<bits/stdc++.h>
using namespace std;

void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
    if(index == n){
        ans.push_back(temp);
        return;
    }
    subseq(arr,index+1,n,ans,temp);
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
}

int main(){
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    subseq(arr,0,3,ans,temp);
    for(auto ele : ans){
        for(auto el1: ele){
            cout<<'{'<<el1<<'}'<<" ";
        }
        cout<<"\n";
    }
}