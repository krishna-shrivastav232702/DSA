#include<iostream>
using namespace std;

void swap(int &a, int &b);
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int start=0,end=n-1;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(start<=end){
        if(arr[start]==0){
            start++;
        }
        if(arr[end]==1){
            end--;
        }
        if(arr[start]!=0 && arr[end]!=1){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}