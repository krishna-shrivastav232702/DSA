#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=1,target;
    cout<<"Enter target"<<endl;
    cin>>target;
    while(end<n){
        if(arr[end]-arr[start]==target) break;
        else if(arr[end]-arr[start]<target) end++;
        else start++;

    }
    if(arr[end]-arr[start]==target){
        cout<<"elements are "<<arr[start]<<" "<<arr[end]<<endl;
    }
    else{
        cout<<"no pair";
    }

    
}