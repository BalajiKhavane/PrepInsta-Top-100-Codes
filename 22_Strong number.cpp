#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calFactorial(int num){
    if(num == 0 or num == 1){
        return num;
    }
    return num * calFactorial(num-1);
}

bool strongNumber(int num){
    int temp = num;
    vector<int> fact;
    while(temp > 0){
        int factorial = calFactorial(temp%10);
        fact.push_back(factorial);
        temp /= 10;
    }

    int sum = 0;
    for(int i : fact){
        sum += i;
    }

    return sum == num;
}
int main(){
    int num;
    vector<int> result;
    cout<<"Enter number :"<<endl;
    cin>>num;
    cout<<strongNumber(num)<<endl;;

    return 0;
}