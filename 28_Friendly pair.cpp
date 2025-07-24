#include <iostream>
#include <cmath>
using namespace std;
bool isFriendlyPair(int num1,int num2){
    int temp1 = num1, temp2 = num2;

    int sum1 = 0, sum2 = 0;
    for(int i=1;i<max(num1,num2);i++){
        if(num1%i == 0 && i != num1){
            sum1 += i;
        }

        if(num2%i == 0 && i != num2){
            sum2 += i;
        }
    }

    return (sum1%temp1) == (sum2%temp2); 
}
int main(){
    int num1,num2;
    cout<<"Enter number :"<<endl;
    cin>>num1>>num2;

    cout<<isFriendlyPair(num1,num2)<<endl;
    return 0;
}