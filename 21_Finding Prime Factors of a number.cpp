#include <iostream>
#include <vector>
using namespace std;
vector<int> primeFactors(int num){
    vector<int> ans;
    if(num == 0 or num == 1){
        return {};
    }
    int div = 2;
    while(num > 1){
        if(num%div == 0){
            ans.push_back(div);
            num /= div;
        }else{
            div++;                      
        }
    }
    return ans;
}
int main(){
    int num;
    vector<int> result;
    cout<<"Enter number :"<<endl;
    cin>>num;
    result = primeFactors(num);

    for(int i : result){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}