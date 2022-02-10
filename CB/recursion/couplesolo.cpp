#include <iostream>
using namespace std;
int ways(int num){
    if(num<=1){
        return 1;
    }
    if(num==2){
        return 2;
    }
    int nu=ways(num-1)+ (num-1)*ways(num-2);
    return nu;
}
int main(){
    int num;
    cin>>num;
    cout<<ways(num);
}