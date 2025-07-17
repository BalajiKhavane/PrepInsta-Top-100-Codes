#include <iostream>
using namespace std;
int reverseNumber(int num){
    int ans = 0;
    while(num > 0){
        ans *= 10;
        ans += num%10;
        num /= 10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    cout<<reverseNumber(num)<<endl;

    return 0;
}