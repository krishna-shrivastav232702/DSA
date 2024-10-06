#include<iostream>
using namespace std;

int main(){
    int start=0,n,end,mid,target;
    int arr[100];
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    end=n-1;
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target"<<endl;
    cin>>target;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            cout<<"index is "<<mid<<endl;
            return mid;
        }
        else if(arr[mid]>=arr[start]){
            if(arr[start]<=target && arr[mid]>=target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && arr[end]>=target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
           
        }
    }

    

}