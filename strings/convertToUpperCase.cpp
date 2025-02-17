#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char arr[30];
    cin.getline(arr,30);
    for(int i=0;i<strlen(arr);i++){
        char ch = arr[i];
        if( ch >= 'a' && ch <='z'){
            int index = arr[i]-'a';
            arr[i]= char(index+'A');
        }
    }
    cout<<arr<<endl;

}

