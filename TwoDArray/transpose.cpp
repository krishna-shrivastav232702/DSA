#include <iostream>
using namespace std;

int main()
{
    int arr[10][10],row,col;
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
            if(i<j){
                int temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}