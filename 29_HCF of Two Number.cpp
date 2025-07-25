#include <iostream>
using namespace std;
int HCF(int num1,int num2){
    int hcf = 0;
    for(int i=1;i<=min(num1,num2);i++){
        if(num1%i == 0 && num2%i == 0){
            hcf = i;
        }
    }
    return hcf;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;

    cout<<HCF(num1,num2)<<endl;

    return 0;
}