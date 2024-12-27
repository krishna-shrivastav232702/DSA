#include<iostream>
using namespace std;

template<class T>
void bubble(T a[],int n){
    T temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main(){
    int a[]={3,2,4,1,5};
    bubble(a,5);
    cout<<"After sorting int array elements are"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    float b[]={3.3,2.2,5.5,1.1,6.6};
    bubble(b,5);
    cout<<endl<<"After sorting float array elements are"<<endl;
    for(int i=0;i<5;i++) cout<<b[i]<<" ";
    cout<<endl;
    char c[]={'a','c','d','b','e'};
    bubble(c,5);
    for(int i=0;i<5;i++) cout<<c[i]<<" ";
}