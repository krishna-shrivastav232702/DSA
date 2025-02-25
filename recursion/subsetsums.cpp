#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int index,int n,vector<int>&ans,int total){
    if(index == n){
        ans.push_back(total);
        return;
    }
    subset(arr,index+1,n,ans,total);
    total = total + arr[index];
    subset(arr,index+1,n,ans,total);
}

int main(){
    int arr[]={3,4,5};
    vector<int>ans;
    subset(arr,0,3,ans,0);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<"\n";
}