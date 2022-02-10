#include <iostream>
using namespace std;
int sum(int arr[],int n){
    if (n==0)
    {
        return 0;
    }
    return arr[0]+sum(arr+1,n-1);
}
int sum2(int arr[],int n){
    if (n==0)
    {
        return 0;
    }
    return arr[n-1]+sum2(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sum2(arr,n);
}