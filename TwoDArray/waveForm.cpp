#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>>arr(3,vector<int>(3));
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }  

    cout<<"Elements in the wave form"<<endl;
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=2;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}