#include<bits/stdc++.h>
using namespace std;


void permu(vector<int>&arr,vector<vector<int>>&ans,int index){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        permu(arr,ans,index+1);
        swap(arr[i],arr[index]);
    }
}

int main(){
    vector<int>arr{1,2,3,5};
    vector<vector<int>>ans;
    permu(arr,ans,0);
    for(auto ele:ans){
        for(auto ele1:ele){
            cout<<ele1<<" ";
        }
        cout<<"\n";
    }
}