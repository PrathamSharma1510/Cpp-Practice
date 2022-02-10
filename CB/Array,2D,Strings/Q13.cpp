#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    bool ans=true;
    for (int i = 2; i <=(a/2); i++)
    {
        if (a%i==0)
        {
            ans=false;
        }
    }
    if (ans)
    {
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
	return 0;
}