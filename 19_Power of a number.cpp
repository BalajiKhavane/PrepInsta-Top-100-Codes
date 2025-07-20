#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int calPowerOfNumber(int base, int exponent){
    if(exponent == 0 or base == 1){
        return 1;
    }
    int ans = 1;
    while(exponent > 0){
        if(exponent%2 == 1){
            ans *= base;
        }
        exponent /= 2;
        base *= base;
    }

    return ans;
}
int main(){
    int base, exponent;
    cout<<"Enter base and exponent :"<<endl;
    cin>>base>>exponent;
    cout<<calPowerOfNumber(base,exponent)<<endl;

    return 0;
}