#include<bits/stdc++.h>
using namespace std;

// void print(int* arr,int n,int index){
//     if(index == n){
//         return;
//     }
//     cout<<arr[index]<<" ";
//     print(arr,n,index+1);
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     print(arr,5,0);
//     cout<<"\n";
// }

// void print(int* arr,int n,int index){
//     if(index==n){
//         return;
//     }
//     print(arr,n,index+1);
//     cout<<arr[index]<<" ";
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     print(arr,5,0);
//     cout<<"\n";
// }

void print(int arr[],int index){
    if(index==-1){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,4);
    cout<<"\n";
}