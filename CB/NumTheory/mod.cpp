#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long long int a,b,c;
    cin>>a>>b>>c;
    //brute force don't work for large nos.
    // int an=pow(a,b);
    // int ans=an%c;
    // cout<<ans;
	// return 0;
    // optimise-1 take more time
    // long long int ans=a;
    // for (int i = 1; i < b; i++)
    // {
    //     ans=((ans)*(a%c))%c;
    // }
    // ans=ans%c;
    //optimize best solution 
    long long int ans=1;
    while (b>0)
    {
        if(b%2!=0){
            ans=((ans)*(a%c))%c;
        }
        a=((a%c)*(a%c))%c;
        b=b>>1;
    }
    cout<<ans;
}