#include<iostream>
using namespace std;

int main(){
    int arr[10][10],row,col;
    cout<<"enter no of rows and cols"<<endl;
    cin>>row>>col;
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
        cin>>arr[i][j];

    //transpose
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    //reverse the elements in the rows

    for(int i=0;i<row;i++){
        int start=0;
        int end=col-1;
        while(start<=end){
            int temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;
            start++;
            end--;
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    
}