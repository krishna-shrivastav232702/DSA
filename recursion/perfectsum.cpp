#include<bits/stdc++.h>
using namespace std;

int perfsum(int arr[],int index,int n,int sum ){
    if(index == n){
        return sum==0;
    }
    return perfsum(arr,index+1,n,sum) + perfsum(arr,index+1,n,sum-arr[index]);
}

int main(){
    int arr[]={2,5,6,1,0};
    cout<<perfsum(arr,0,5,8)<<"\n";
}