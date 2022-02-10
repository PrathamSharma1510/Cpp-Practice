#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int ans=arr[0];
    for (int i = 1; i < num; i++)
    {
        ans=ans^arr[i];
    }
    int pos=0;
    int temp=ans;
    while ((temp&1)!=1)
    {
        pos++;
        temp=temp>>1;
    }
    // pos=pos-1;
    int n=0;
    // cout<<pos;
    for (int i = 0; i < num; i++)
    {
        if ((arr[i]&(1<<pos))>0)
        {
            n=arr[i]^n;
        }
    }
    cout<<n<<" "<<(ans^n);
}
