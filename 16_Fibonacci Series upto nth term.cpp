#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
int helper(int num){
    if(num < 2){
        return dp[num] = num;
    }
    if(dp[num] != -1){
        return dp[num];
    }

    return dp[num] = helper(num-1)+helper(num-2);
}
int fibo(int num){
    for(int i=0;i<=num;i++){
        dp.push_back(-1);
    }
    helper(num);
}

int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    fibo(num);

    for(auto i : dp){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}