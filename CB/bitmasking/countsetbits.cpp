#include <iostream>
using namespace std;
int countbits(int num){
    int sum=0;
    while (num>0)
    {
        if ((num&1)==1)
        {
            sum++;
        }
        num=num>>1;
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    cout<<countbits(num);
}