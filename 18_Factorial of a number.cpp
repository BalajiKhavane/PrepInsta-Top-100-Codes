#include <iostream>
using namespace std;
int factorial(int num){
    if(num == 1 or num == 2){
        return num;
    }

    return num * factorial(num-1);
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    cout<<factorial(num)<<endl;

    return 0;
}