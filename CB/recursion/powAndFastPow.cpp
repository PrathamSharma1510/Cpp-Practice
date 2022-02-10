#include <iostream>
using namespace std;
int fastPow(int a,int b){
    if(b==0){
        return 1;
    }
    int sq=fastPow(a,b>>1);
    sq=sq*sq;
    if((b&1)==1){
        return sq*a;
    }
    return sq;
}
int pow(int a,int b){
    if(b==1){
        return a;
    }
    return a*pow(a,b-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fastPow(a,b);
}