#include <iostream>
using namespace std;
int binToDec(int num){
    int ans=0;
    int p=1;
    while (num>0)
    {
        int last_bit=num&1;
        ans=p*last_bit+ans;
        p*=10;
        num=num>>1;
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    cout<<binToDec(num);
}