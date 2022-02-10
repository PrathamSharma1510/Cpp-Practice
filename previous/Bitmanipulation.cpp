#include<iostream>
using namespace std;
void unique(int arr[],int n){
    int a=0;
    for (int i = 0; i < n; i++)
    {
        a=a^arr[i];
    }
    int d=a;
    int setbit=0;
    int pos=0;
    while (setbit !=1)
    {
        setbit=a&1;
        pos++;
        a=a>>1;
    }
    pos=pos-1;
    int s=0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]&1<<pos)!=0)
        {
            s=s^arr[i];
        }
    }
    cout<<s<<endl;
    cout<<(s^d);
}
int main(){
    int arr[]={1,2,3,4,1,2,3,5};
    unique(arr,8);
}