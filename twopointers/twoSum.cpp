#include <iostream>
using namespace std;

int main()
{
    // int n;
    // int arr[100];
    // cout<<"enter size of an array"<<endl;
    // cin>>n;
    // cout<<"Enter elements of the array"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int target;
    // cout<<"enter target"<<endl;
    // cin>>target;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==target){
    //             cout<<"arr[i]: "<<arr[i]<<" arr[j]: "<<arr[j]<<endl;
    //             break;
    //         }
    //     }
    // }

    // int n;
    // int arr[100];
    // cout << "enter size of an array" << endl;
    // cin >> n;
    // cout << "Enter elements of the array" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int target;
    // cout << "enter target" << endl;
    // cin >> target;

    // for(int i=0;i<n-1;i++){
    //     int x=target-arr[i];
    //     int start=i+1;
    //     int end=n-1;
    //     while(start<=end){
    //         int mid=(start+end)/2;
    //         if(arr[mid]==x){
    //             cout<<"numbers are: "<<arr[i]<<" "<<x;
    //             break;
    //         }
    //         else if(arr[mid]>x){
    //             end=mid-1;
    //         }
    //         else{
    //             start=mid+1;
    //         }
    //     }
    // }

    int n;
    int arr[100];
    cout << "enter size of an array" << endl;
    cin >> n;
    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "enter target" << endl;
    cin >> target;
    int start = 0;
    int end = n - 1;
    while (arr[start] + arr[end] != target && start <= end)
    {
        if (arr[start] + arr[end] > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    if (arr[start] + arr[end] == target)
    {
        cout << "The numbers are :" << arr[start] << " " << arr[end];
    }
    else{
        cout<<"there are no such pairs "<<endl;
    }
}