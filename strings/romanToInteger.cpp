#include <iostream>
#include <string>
using namespace std;

int num(char x);
int main()
{
    string s;
    cout << "Enter a roman number" << endl;
    getline(cin, s);
    int sum=0;
    for(int i=0;i<s.size()-1;i++){
        if(num(s[i])<num(s[i+1])){
            sum = sum - num(s[i]);
        }
        else{
            sum = sum+num(s[i]);
        }
    }
    sum+=num(s[s.size()-1]);
    cout<<"The total sum is : "<<sum<<endl;
}

int num(char x)
{
    switch (x)
    {
    case 'I':
        return 1;
    case 'X':
        return 10;
    case 'v':
        return 5;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}