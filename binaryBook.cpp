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
    int sum = 0, max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            max = arr[i + 1];
        }
        sum = sum + arr[i];
    }
    int start = max,end=sum,mid,ans,m;
    while(start<=end){
        mid=(start+end)/2;
        int page=0,count=1;
        for(int i=0;i<n;i++){
            page=page+arr[i];
            if(page>mid){
                count+=1;
                page=arr[i];
            }
        }
        if(count<=m){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
}