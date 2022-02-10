#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int ar[64]={0};
    for (int i = 0; i < num; i++)
    {
        int a=arr[i];
        int j=0;
        while (a>0)
        {
            if((a&1)==1){
                ar[j]++;
            }
            a=a>>1;
            j++;
        }
    }
    for (int i = 0; i < 64; i++)
    {
        ar[i]=ar[i]%3;
    }
    int ans=0;
    for (int i = 0; i < 64; i++)
    {
        ans=ans+(ar[i]*pow(2,i));
    }
    cout<<ans;
}