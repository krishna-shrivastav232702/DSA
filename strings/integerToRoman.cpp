#include<iostream>
#include<string>
using namespace std;

string character(int val);
int main(){
    int num,x;
    cout<<"Enter a number"<<endl;
    cin>>num;
    string strNum = to_string(num);
    if(strNum.size()==4){
        x=1000;
    }else if( strNum.size()==3){
        x=100;
    }
    int digit;
    digit=num%10;
    num=num-digit;
    int rem,val;
    string ans,answer;
    while(x>0){
        rem=num%x;
        val=num-rem;
        ans=character(val);
        answer=answer+ans;
        x=x/10;
        num=rem;
    }
    answer = answer+character(digit);
    cout<<"Roman form is "<<answer;
}

string character(int val){
    switch (val){
        case 1000:
        return "M";
        case 2000:
        return "MM";
        case 3000:
        return "MMM";
        case 200:
        return "CC";
        case 100:
        return "C";
        case 300:
        return "CCC";
        case 400:
        return "CD";
        case 500:
        return "D";
        case 600:
        return "DC";
        case 700:
        return "DCC";
        case 800:
        return "DCCC";
        case 900:
        return "CM";
        case 10:
        return "X";
        case 20:
        return "XX";
        case 30:
        return "XXX";
        case 40:
        return "XL";
        case 50:
        return "L";
        case 60:
        return "LX";
        case 70:
        return "LXX";
        case 80:
        return "LXXX";
        case 90:
        return "XC";
        case 1:
        return "I";
        case 2:
        return "II";
        case 3:
        return "III";
        case 4:
        return "IV";
        case 5:
        return "V";
        case 6:
        return "VI";
        case 7:
        return "VII";
        case 8:
        return "VIII";
        case 9:
        return "IX";
    }
}