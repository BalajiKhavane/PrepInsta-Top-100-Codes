#include <iostream>
using namespace std;
bool isPerfectNumber(int num){
    if(num == 0) return false;
    int sum = 0;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0){
            sum += i;
        }
    }
    
    return sum == num;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;

    cout<<isPerfectNumber(num)<<endl;

    return 0;
}