#include<bits/stdc++.h>
using namespace std;

int targetsum(int arr[],int index,int n,int target){
    if(target==0){
        return 1 ;
    }
    if(index==n || target<0){
        return 0;
    }
    return targetsum(arr,index,n,target-arr[index])+targetsum(arr,index+1,n,target);
}

int main(){
    int arr[]={2,3,4};
    cout<<targetsum(arr,0,3,6)<<"\n";
}