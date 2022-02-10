#include <iostream>
using namespace std;
int occu(int arr[],int n,int k){
    if (n==0)
    {
        return 0;
    }
    int x=occu(arr,n-1,k);
    if (arr[n-1]==k)
    {
        x++;
    }
    return x;
}
int occu1(int arr[],int n,int k){
    if (n==0)
    {
        return 0;
    }
    int x=occu1(arr+1,n-1,k);
    if (arr[0]==k)
    {
        x++;
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans=0;
    cout<<occu1(arr,n,k);
}