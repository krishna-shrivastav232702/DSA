#include<iostream>
using namespace std;

int main(){
    int n,m,o;
    cout<<"Enter no of rows and cols"<<endl;
    cin>>n>>m>>o;
    int ***ptr = new int** [n];
    for(int i=0;i<n;i++){
        ptr[i]= new int* [m];
        for(int j=0;j<m;j++){
            ptr[i][j]=new int[o];
        }
    }

    for(int i=0;i<n;i++){
        cout<<"In 1d "<<ptr[i]<<endl;
        for(int j=0;j<m;j++){
            cout<<"In 2d "<<ptr[i][j]<<endl;
            for(int k=0;k<o;k++){
                ptr[i][j][k]=i;
                cout<<ptr[i][j][k]<<" "<<&ptr[i][j][k]<<endl;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
    cout<<ptr[1][1][1];
}