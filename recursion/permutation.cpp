#include<bits/stdc++.h>
using namespace std;

void permu(int arr[],vector<vector<int>>&ans,vector<int>temp,vector<bool>visited){
    if(visited.size()==temp.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permu(arr,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}

int main(){
    int arr[]={1,5,3,5};
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(4,0);
    permu(arr,ans,temp,visited);
    for(auto ele:ans){
        for(auto ele1:ele){
            cout<<ele1<<" ";
        }
        cout<<"\n";
    }
}    