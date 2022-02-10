#include<iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    int b=1;
    int i=1;
    while(b<=n)
    {
        int a=(3*i)+2;
        if (a%x!=0)
        {
            cout<<a<<endl;
            b++;
        } 
        i++;
    }
    
	return 0;
}