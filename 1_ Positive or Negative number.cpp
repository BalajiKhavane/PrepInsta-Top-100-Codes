#include <iostream>
using namespace std;
void isPositiveOrNegative(int num){
    if(num%2 == 0){
        cout<<"The number is positive."<<endl;
    }else{
        cout<<"The number is Negative."<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    isPositiveOrNegative(num);

    return 0;
}