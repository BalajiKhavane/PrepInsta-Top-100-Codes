#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<sumOfNaturalNumbers(n)<<endl;

    return 0;
}