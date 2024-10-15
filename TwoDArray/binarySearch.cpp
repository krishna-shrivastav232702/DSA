#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], row, col;
    cout << "Enter no of rows and cols" << endl;
    cin >> row >> col;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    int val;
    cout << "Enter value to be searched" << endl;
    cin >> val;
    for (int i = 0; i < row; i++)
    {
        if (arr[i][0] <= val && val <= arr[i][col - 1])
        {
            int start = 0, end = col - 1;
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (arr[i][mid] == val)
                {
                    cout << "value found at index " << i << " " << mid << endl;
                    break;
                }
                else if (arr[i][mid] > val)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
    }
}