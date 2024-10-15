#include<iostream>
using namespace std;

int main(){
    int arr[10][10],brr[10][10];
    int row,col;
    cout<<"Enter no of rows and cols"<<endl;
    cin>>row>>col;
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int k=row-i-1;
            brr[j][k]=arr[i][j];
        }
    }
    cout<<"rotated array is"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<brr[i][j]<<" ";

        }
        cout<<endl;
    }
}