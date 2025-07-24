#include <iostream>
#include <cmath>
using namespace std;
bool isHarshadNumber(int num){
    if(num == 1){
        return true;
    }
    
    int temp = num, sum = 0;
    while (temp > 0){
        sum += temp%10;
        temp /= 10;
    }

    return num%sum == 0;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    cout<<isHarshadNumber(num)<<endl;
    return 0;
}