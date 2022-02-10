#include<iostream>
#include <math.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int d=pow(b,2)-(4*a*c);
    bool ans=true;
    if (d==0)
    {
        cout<<"Real and Equal"<<endl;
    }
    else if (d>0)
    {
        cout<<"Real and Distinct"<<endl;
    }
    else{
        cout<<"Imaginary"<<endl;
        ans=false;
    }
    if (ans)
    {
        int root1,root2;
        root1=(-(b)+sqrt(d))/2*a;
        root2=(-(b)-sqrt(d))/2*a;
        cout<<root2<<" "<<root1;
    }
	return 0;
}