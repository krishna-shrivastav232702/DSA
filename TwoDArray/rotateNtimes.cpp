#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], row, col;
    cout << "Enter no of rows and cols" << endl;
    cin >> row >> col;
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int r;
    cout << "Enter no of times the array to be rotated" << endl;
    cin >> r;
    r=r%4;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (j < k)
                {
                    int temp = arr[j][k];
                    arr[j][k] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }

        for (int j = 0; j < row; j++)
        {
            int start = 0, end = col - 1;
            while (start <= end)
            {
                int temp = arr[j][start];
                arr[j][start] = arr[j][end];
                arr[j][end] = temp;
                start++;
                end--;
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