#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int ans[64]={0};
    for (int i = 0; i < num; i++)
    {
        int a=arr[i];
        int j=0;
        while (a>0)
        {
            if((a&1)==1){
                ans[j]++;
            }
            a=a>>1;
            j++;
        }
    }
    int an=0;
    for (int i = 0; i < 64; i++)
    {
        ans[i]=ans[i]%3;
        an+=(ans[i]*(pow(2,i)));
    }
    cout<<an;
	return 0;
}