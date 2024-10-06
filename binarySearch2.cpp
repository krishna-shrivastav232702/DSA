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
    int start=0,end=n-1,ans=n,mid,target;
    cout<<"enter element to be inserted or searched in the array"<<endl;
    cin>>target;

    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            ans= mid;
            end=mid-1;
        }
    }


    if(ans == n || arr[ans]!=target){
        for(int i=n;i>ans;i--){
            arr[i]=arr[i-1];
        }
        arr[ans]=target;
        n++;
    }
    else{
        cout<<"element already exist in the array at index "<<ans;
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        cout<<" "<<arr[i]<<" ";
    }


    
    


}