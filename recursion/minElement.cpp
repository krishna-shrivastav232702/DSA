#include<bits/stdc++.h>
using namespace std;

// int minelement(int arr[],int n,int min,int index){
//     if(index==n){
//         return min;
//     }
//     min > arr[index] ? min=arr[index] : min;
//     return minelement(arr,n,min,index+1);
// }

int minelement(int arr[],int index,int n){
    if(index == n-1){
        return arr[index];
    } 
    return min(arr[index],minelement(arr,index+1,n));

}

int main(){
    int arr[5]={2,5,8,-1,9};
    // int ans = minelement(arr,5,arr[0],0);
    int ans = minelement(arr,0,5);
    cout<<ans<<"\n";
}