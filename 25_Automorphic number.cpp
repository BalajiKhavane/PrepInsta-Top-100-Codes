#include <iostream>
#include <cmath>
using namespace std;
bool isAutomorphicNumber(int num){
    if(num == 0 or num == 1){
        return true;
    }
    int sqr = num*num;
    while(num > 0){
        if(num%10 != sqr%10){
            return false;
        }
        num /= 10;
        sqr /= 10;
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    cout<<isAutomorphicNumber(num)<<endl;
    return 0;
}