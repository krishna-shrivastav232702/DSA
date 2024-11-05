#include<iostream>
using namespace std;

class sample{
    int a,b;
    public:
    void setValue(){
        cout<<"Enter any two values"<<endl;
        cin>>a>>b;
    }
    friend float mean (sample s);
};

float mean(sample s){
    return float(s.a+s.b)/2.0;
}

int main(){
    sample s1;
    s1.setValue();
    float ans = mean(s1);
    cout<<"Mean is "<<ans;
}