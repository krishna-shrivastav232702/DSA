#include <iostream>
using namespace std;

// int main(){
//     int arr[5]={1,4,6,8,5};
//     int i=4;
//     while(i>=0){
//         if(arr[i-1]>arr[i]){
//             swap(arr[i-1],arr[i]);
//         }
//         else{
//             break;
//         }
//         i--;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5]={4,3,5,1,2};
//     for(int i=0;i<4;i++){
//         int j=i+1;
//         while(j>0){
//             if(arr[j-1]>arr[j]){
//                 swap(arr[j-1],arr[j]);
//             }

//             j--;
//         }
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    cout << "Enter " << n << " numbers in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sorted array is" << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}