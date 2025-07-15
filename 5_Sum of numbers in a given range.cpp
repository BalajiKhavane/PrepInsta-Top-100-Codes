#include <iostream>
using namespace std;
int sumOfNumbers(int num1, int num2, int ans){
    if(num2 <= 0){
        return ans;
    }
    ans += num1;
    return sumOfNumbers(num1+1, num2-1, ans);
}
int main(){
    int num1, num2;
    cout<<"Enter the value of num1 and num2"<<endl;
    cin>>num1>>num2;
    cout<<sumOfNumbers(num1,num2,0)<<endl;

    return 0;
}