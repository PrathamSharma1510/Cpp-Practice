#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int ans=1;
    int mul=a;
    while (b>0)
    {
        if((b&1)==1){
            ans=a*ans;
        }
        a=a*a;
        b=b>>1;
    }
    cout<<ans;
	return 0;
}