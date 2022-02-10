#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxsum=0;
    int x=0;
    for (int i = 0; i < n; i++)
    {
        x+=arr[i];
        if(x<0){
            x=0;
        }
        maxsum=max(x,maxsum);
    }
    cout<<maxsum;
}