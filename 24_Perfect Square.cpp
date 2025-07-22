#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectSquare(int num){
    if(num < 0){
        return false;
    }
    int temp = sqrt(num);
    return temp*temp == num;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    cout<<isPerfectSquare(num)<<endl;
    return 0;
}