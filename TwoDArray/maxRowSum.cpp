#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,100,13,14,15,16,17,18};
    int sum=0,ans,rowSum=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        if(rowSum<sum){
            rowSum=sum;
            ans=i;
        }
        sum=0;

    }

    cout<<"row no is "<<ans<<endl;
}