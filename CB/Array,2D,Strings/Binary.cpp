#include<iostream>
#include<math.h>
using namespace std;
void binToDec(int a){
    int i=0;
    int ans=0;
    while (a!=0)
    {
        int x=a%10;
        if (x==1)
        {
            ans+=pow(2,i);
            i++;
            a=a/10;
        }
        else{
            i++;
            a=a/10;
        }
    }
    cout<<ans<<endl;
}
int main() {
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        binToDec(a);
    }
	return 0;
}