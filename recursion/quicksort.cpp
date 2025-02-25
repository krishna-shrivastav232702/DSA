#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end){
    int pos = start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[],int start,int end){
    if(start>end){
        return;
    }
    int pivot = partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}

int main(){
    int arr[]={5,32,16,4,2,1,13,26,9,4,8};
    quicksort(arr,0,10);
    for(auto ele : arr){
        cout<<ele<<" ";
    }
    cout<<"\n";
}