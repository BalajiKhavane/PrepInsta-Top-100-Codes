#include <iostream>
using namespace std;
bool isPalindrome(int num){
    int temp = num;
    int reverse = 0;
    while(temp > 0){
        reverse *= 10;
        reverse += temp%10;
        temp /= 10;
    }
    return reverse == num;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    if(isPalindrome(num)){
        cout<<num<<" is palindrome."<<endl;
    }else{
        cout<<num<<" is not palindrome."<<endl;
    }

    return 0;
}