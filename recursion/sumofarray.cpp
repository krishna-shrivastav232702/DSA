#include<bits/stdc++.h>
using namespace std;

// int printarr(int arr[],int n,int index,int total){
//     if(index == n){
//         return total;
//     }
//     total = total+arr[index];
//     return printarr(arr,n,index+1,total);
// }

// int main(){
//     int arr[5]={2,4,6,12,45};
//     int ans = printarr(arr,5,0,0);
//     cout<<ans<<"\n";
// }

// int sumarr(int arr[],int n,int index){
//     if(index == n){
//         return 0;
//     }
//     return sumarr(arr,n,index+1)+arr[index];
// }


// int main(){
//     int arr[5]={2,4,6,8,12};
//     int ans = sumarr(arr,5,0);
//     cout<<ans<<"\n";
// }

int sumarr(int arr[],int n,int index){
    if(index==-1){
        return 0;
    }
    return arr[index]+sumarr(arr,n,index-1);
}


int main(){
    int arr[5]={2,4,6,8,12};
    int ans = sumarr(arr,5,4);
    cout<<ans<<"\n";
}