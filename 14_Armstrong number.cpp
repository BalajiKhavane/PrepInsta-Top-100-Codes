#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool armstrongNumber(int num){
    string str = to_string(num);
    int n = str.size(),sum = 0;
    for(int i=0;i<str.size();i++){
        int digit = str[i]-'0';
        sum += pow(digit,n);
    }
    return sum == num;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    if(armstrongNumber(num)){
        cout<<num<<" is Armstrong Number."<<endl;
    }else{
        cout<<num<<" is not Armstrong Number."<<endl;
    }

    return 0;
}