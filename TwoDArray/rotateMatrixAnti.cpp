#include<iostream>
using namespace std;

int main(){
    int arr[10][10],row,col;
    cout<<"Enter no of rows and cols in array"<<endl;
    cin>>row>>col;
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++) cin>>arr[i][j];
    
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
    //column wise reverse

    for(int i=0;i<col;i++){
        int start=0,end=row-1;
        while(start<=end){
            int temp=arr[start][i];
            arr[start][i]=arr[end][i];
            arr[end][i]=temp;
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