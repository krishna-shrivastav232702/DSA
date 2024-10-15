#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int target, row, col;
    cout << "Enter no of rows and cols" << endl;
    cin >> row;
    cout << endl;
    cin >> col;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter target" << endl;
    cin >> target;
    int flag;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                flag = 1;
                cout << "Element found at index " << i << " " << j << endl;
                break;
            }
        }
    }

    if (flag != 1)
        cout << "Element not found in 2d array";
}