#include <iostream>
using namespace std;
void isPositiveOrNegative(int num){
    if(num == 0) cout<<"The number is 0."<<endl;
    if(num > 0){
        cout<<"The number is Positive."<<endl;
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