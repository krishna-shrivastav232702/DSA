#include<iostream>
using namespace std;

// int main(){ //code is for descending order
//     int arr[1000];
//     int n;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         int index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[index]){
//                 index=j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of required array"<<endl;
    cin>>n;
    cout<<"Enter numbers in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>0;i--){
        int index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}