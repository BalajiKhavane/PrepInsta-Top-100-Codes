#include <iostream>
#include <cmath>
using namespace std;
bool isAbundantNumber(int num){
    if(num == 0){
        return false;
    }
    
    int sum = 0;
    for(int i=1;i<=num/2;i++){
        sum += i;
    }

    return sum > num;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    cout<<isAbundantNumber(num)<<endl;
    return 0;
}