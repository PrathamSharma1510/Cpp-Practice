#include<iostream>
using namespace std;
void decimalToOcta(int n){
    int sum=0;
    int d=1;
    while (n!=0)
    {
        int x=n%8;
        if (d==1)
        {
            sum=x;
        }
        else{
            sum+=x*d;
        }
        n=n/8;
        d=d*10;
    }
    cout<<sum;
}
int main() {
    long long int n;
    cin>>n;
    decimalToOcta(n);
	return 0;
}