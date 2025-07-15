#include <iostream>
using namespace std;
int calSum(int num, int ans){
    if(num == 0){
        return ans;
    }
    return ans = num + calSum(num-1, ans);
}
int main(){
    int num;
    cout<<"Enter number :"<< endl;
    cin >> num;
    cout<<calSum(num,0);

    return 0;
}