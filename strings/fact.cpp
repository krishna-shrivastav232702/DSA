#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter no"<<endl;
    cin>>n;
    int N=n;
    vector<int>ans(1,1);
    while(n>1){
        int carry=0,res,size=ans.size();
        for(int i=0;i<size;i++){
            res=ans[i]*n+carry;
            carry=res/10;
            ans[i]=res%10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        n--;
    }

    cout<<"Factorial of "<<N<<" is "<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
}