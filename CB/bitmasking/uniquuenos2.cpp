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
    int a=arr[0];
    for (int i = 1; i < num; i++)
    {
        a=a^arr[i];
    }
    int pos=0;
    int temp=a;
    while ((temp&1)!=1)
    {
        temp=temp>>1;
        pos++;
    }
    // cout<<pos;
    int firstnos=0;
    for (int i = 0; i < num; i++)
    {
        if((arr[i]&(1<<pos))>0){
            // cout<<arr[i]<<" ";
            firstnos=firstnos^arr[i];
        }
    }
    cout<<firstnos<<" ";
    cout<<(a^firstnos);
}