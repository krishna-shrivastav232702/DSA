#include <iostream>
using namespace std;

void transpose(int (&arr)[10][10], int, int);
void reverse(int (&arr)[10][10],int,int);

int main()
{
    int arr[10][10], row, col;
    cout << "Enter no of rows and cols" << endl;
    cin >> row >> col;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    }
    transpose(arr,row,col);
    reverse(arr,row,col);
    transpose(arr,row,col);
    reverse(arr,row,col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

void transpose(int (&arr)[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
}

void reverse(int (&arr)[10][10],int row,int col){
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
}