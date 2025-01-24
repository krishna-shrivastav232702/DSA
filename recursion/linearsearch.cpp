#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int key,int index){
    if(index==-1){
        return -1;
    }
    if(arr[index]==key){
        return index;
    }
    return find(arr,key,index-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int ans = find(arr,3,4);
    cout<<ans<<endl;
}