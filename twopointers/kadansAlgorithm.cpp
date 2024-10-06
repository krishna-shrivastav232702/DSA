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
    int maxi=-1000;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0) prefix=0;
    }
    cout<<maxi<<endl;
}