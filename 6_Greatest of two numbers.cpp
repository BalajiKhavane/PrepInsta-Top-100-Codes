#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter numbers :"<<endl;
    cin>>num1>>num2;

    if(num1 > num2){
        cout<<num1<<" is greatest."<<endl;
    }else{
        cout<<num2<<" is greatest."<<endl;
    }

    return 0;
}