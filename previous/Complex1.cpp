#include <iostream>
#include<cmath>
using namespace std;
long Sum(long a,long b,long c){
    if (b==0)
    {
        return 0;
    }
    if (a>0 && b>0 && c>0){
    long d=Sum(a,b-1,c);
    long l= pow(a,b);
    return l% c;
    }
    else if (a<0 && b>0 && c>0)
    {
        return c + (a*Sum(a, b-1, c)%c);
    }
    else
    {
        return 1;
    }
    

}

int main() 
{
    long a,b,c;
    cin>>a>>b>>c;
    cout<<Sum(a,b,c);
}    