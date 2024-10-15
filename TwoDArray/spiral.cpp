#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], row, col;
    cout << "Enter no of rows and cols of the matrix" << endl;
    cin >> row >> col;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int top = 0, right = col - 1, bottom = row - 1, left = 0;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i]<<" ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right]<<" ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left]<<" ";
            }
            left++;
        }
    }
}