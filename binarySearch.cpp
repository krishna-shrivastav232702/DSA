#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    cout<<"Enter numbers in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,first=-1,last=-1,mid,target;
    cout<<"Enter target"<<endl;
    cin>>target;

    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    start=0;
    end=n-1;
    
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    cout<<first<<" "<<last;
}