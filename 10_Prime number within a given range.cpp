#include <iostream>
#include <vector>
using namespace std;
vector<bool> primeNumbers(int range){
    vector<bool> prime(range+1,true);
    for(int i=0;i<=range/2;i++){
        if(i == 0 or i == 1){
            continue;
        }
        int idx=2;
        while(idx <= range){
            prime[i*idx] = false;
            idx++;
        }
    }
    return prime;
}
int main(){
    int range;
    vector<bool> result;
    cout<<"Enter the range :"<<endl;
    cin>>range;
    result = primeNumbers(range);

    cout<<"Prime Numbers : "<<endl;
    for(int i=2;i<result.size();i++){
        if(result[i] == true){
            cout<<i<<endl;
        }
    }

    return 0;
}