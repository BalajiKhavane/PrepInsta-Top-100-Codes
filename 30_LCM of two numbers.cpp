#include <iostream>
using namespace std;
int LCM(int num1, int num2){
    int large, small;
    (num1 < num2)? small = num1 : small = num2;
    (num1 > num2)? large = num1 : large = num2;

    int i = 1;
    while(i <= small){
        if(large*i % small == 0){
            return large*i;
        }
        i++;
    }

    return num1*num2;
}
int main(){
    int num1,num2;
    cout<<"Enter numbers :"<<endl;
    cin>>num1>>num2;

    cout<<"LCM is : "<<LCM(num1,num2)<<endl;

    return 0;
}