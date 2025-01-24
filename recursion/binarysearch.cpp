#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int low,int high,int key){
    int mid = (low+high)/2; // mid = low + (high-low)/2
    if(low>high){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return find(arr,low,mid-1,key);
    }
    return find(arr,mid+1,high,key);
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int ans = find(arr,0,6,0);
    cout<<ans<<endl;
}