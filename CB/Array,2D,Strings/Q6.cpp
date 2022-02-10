#include<iostream>
using namespace std;
bool chec(int d){
    int sum1=0;
    int sum2=0;
    while (d!=0)
    {
        int x=d%10;
        if (x%2==0)
        {
            sum1+=x;
        }
        else{
            sum2+=x;
        }
        d=d/10;
    }
    if (sum1%4==0 || sum2%3==0)
    {
        return true;
    }
    return false;
}
int main() {
    int x;
    cin>>x;
    int a=0;
    while (a<x)
    {
        int d;
        cin>>d;
        if (chec(d))
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;

        a++;
    }
	return 0;
}