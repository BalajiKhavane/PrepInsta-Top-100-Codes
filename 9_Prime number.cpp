#include <iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is prime."<<endl;
    }else{
        cout<<num<<" is not prime."<<endl;
    }

    return 0;
}