#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        bool isLeft=(mid==0)||(arr[mid]>arr[mid-1]);
        bool isRight=(mid==n-1)||(arr[mid]>arr[mid+1]);
        if(isLeft&&isRight){
            cout<<"The index is "<<mid<<" and element is "<<arr[mid]<<endl;
            return mid;
        }
        else if((mid==0)|| arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
    return 0;
}