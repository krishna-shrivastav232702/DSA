#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "Enter size of the array" << endl;
    cin >> n;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start=0,end=n-1;
    for(int i=start;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            for(int k=i;k<=end;k++){
                cout<<arr[k]<<" ";
            }
            end--;
            cout<<endl;
        }
        end=n-1;
    }
}