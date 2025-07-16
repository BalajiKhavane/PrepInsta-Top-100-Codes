#include <iostream>
using namespace std;
void isLeap(int year){
    if(year%100 == 0){
        if(year%400 == 0){
            cout<<year<<" is a leap year."<<endl;
        }else{
            cout<<year<<" is not a leap year."<<endl;
        }
    }else if(year%4 == 0){
        cout<<year<<" is a leap year."<<endl;
    }else{
        cout<<year<<" is not a leap year."<<endl;
    }
}
int main(){
    int year;
    cout<<"Enter the year :"<<endl;
    cin>>year;

    isLeap(year);

    return 0;
}