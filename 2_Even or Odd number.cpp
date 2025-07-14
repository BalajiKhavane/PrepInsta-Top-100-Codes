#include <iostream>
using namespace std;
void evenOrOdd(int num){
    if(num%2 == 0){
        cout<<"The number is Even."<<endl;
    }else{
        cout<<"The number is Odd."<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    evenOrOdd(num);

    return 0;
}