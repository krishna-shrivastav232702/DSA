#include<bits/stdc++.h>
using namespace std;

bool Find(int arr[],int index, int n,int target){
    if(target == 0) return 1;
    if(index ==n || target<0) return 0;
    return Find(arr,index+1,n,target) || Find(arr,index+1,n,target-arr[index]);
}

int main(){
    int arr[] = {3,6,4,5};
    int ans = Find(arr,0,4,12);
    cout<<ans<<"\n";
}