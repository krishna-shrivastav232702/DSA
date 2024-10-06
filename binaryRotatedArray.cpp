#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    cout<<"Enter a rotated array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mid,ans=arr[0],start=0,end=n-1;

    while(start<=end){
        mid=(start+end)/2;

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
    }

    cout<<arr[ans]<<" is the element and the index is "<<ans;
    


}