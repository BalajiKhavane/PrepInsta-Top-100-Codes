#include <iostream>
#include <vector>
using namespace std;
vector<int> factorsOfNumber(int num){
    vector<int> ans;
    if(num == 0){
        return {};
    }
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    int num;
    vector<int> result;
    cout<<"Enter number :"<<endl;
    cin>>num;
    result = factorsOfNumber(num);

    for(int i : result){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}