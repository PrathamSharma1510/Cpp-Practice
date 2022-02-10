#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int arr[num];
    int ma=INT_MIN;
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
        ma=max(ma,arr[i]);
    }
    int sec[ma+1];
    for (int i = 0; i < ma+1; i++)
    {
        sec[i]=0;
    }
    for (int i = 0; i < num; i++)
    {
        sec[arr[i]]++;
    }
    int an=0;
    int ans[num];
    for (int i = 0; i < ma+1; i++)
    {
        for (int j=0; j<sec[i]; j++)
        {
            ans[an]=i;
            an++;
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout<<ans[i];
    }
    
	return 0;
}