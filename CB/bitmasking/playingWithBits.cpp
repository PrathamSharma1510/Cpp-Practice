#include<iostream>
using namespace std;
int countSetBits(int a){
    // int ans=0;
    // while (a>0)
    // {
    //     a=a&(a-1);
    //     ans++;
    // }
    return __builtin_popcount(a);
}
int main() {
    int num;
    cin>>num;
    while (num)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for (int i = a; i <=b; i++)
        {
            sum+=countSetBits(i);
        }
        cout<<sum<<endl;
        num--;
    }
	return 0;
}