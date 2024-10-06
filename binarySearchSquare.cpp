#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;

    cout<<"Enter size of the array"<<endl;
    cin>>n;

    int ans,start=1,target,mid,end;
    cout<<"enter elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target value"<<endl;
    cin>>target;

    while(start<=end){
        mid=(start+end)/2;
        if(mid*mid==target){
            ans=mid;
            break;
        }
        else if(mid*mid<target){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<ans;
}