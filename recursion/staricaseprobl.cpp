#include <iostream>
using namespace std;
int staricaseprob(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    if (n==2)
    {
        return 2;
    }
    return staricaseprob(n-1)+staricaseprob(n-2)+staricaseprob(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<staricaseprob(n);
}