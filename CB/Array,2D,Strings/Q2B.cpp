#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool ans=false;
    if (n<3 && n<=1e9)
    {
        cout<<-1;
    }
    else{
        if (n%2==0)
        {
            int j=pow(n/2,2)-1;
            int s=j+2;
            cout<<j<<" "<<s;
        }
        else
        {
            int j=(pow(n,2)-1)/2;
            int s=j+1;
            cout<<j<<" "<<s;
        }
        
    }
	return 0;
}