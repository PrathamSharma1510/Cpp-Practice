#include <iostream>
using namespace std;
int multi(int a,int x){
    if (x==0)
    {
        return 0;
    }
    int ans =multi(a,x-1);
    return a+ans;
}
int main(){
    int a,x;
    cin>>a>>x;
    cout<<multi(a,x);
}