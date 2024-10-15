#include<iostream>
using namespace std;

int main(){
    int a[10][10],b[10][10],row,col;
    cout<<"Enter no of rows and cols"<<endl;
    cin>>row>>col;
    
    cout<<"Enter elements in both the array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j]>>b[i][j];
            a[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Summation of two arrays are"<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}