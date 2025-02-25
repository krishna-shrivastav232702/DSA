#include<bits/stdc++.h>
using namespace std;


void permu(vector<int>&arr,vector<vector<int>>&ans,int index){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }
    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++){
        if(use[arr[i]+10]==0){
            swap(arr[index],arr[i]);
            permu(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10]=1;
        }
    }
}


int main(){
    vector<int>arr={1,1,2};
    vector<vector<int>>ans;
    permu(arr,ans,0);
    for(auto ele:ans){
        for(auto ele1:ele){
            cout<<ele1<<" ";
        }
        cout<<"\n";
    }
}