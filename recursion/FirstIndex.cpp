#include <iostream>
using namespace std;
int firstNum(int arr[],int n,int i,int p){
    if (n==0)
    {
        return -1;
    }
    if (arr[0]==i)
    {
        return p;
    }
    return firstNum(arr+1,n-1,i,p+1);
}
int lastNum(int arr[],int n,int i,int p){
    if (n==0)
    {
        return -1;
    }
    if (arr[n-1]==i)
    {
        return n-1;
    }
    return lastNum(arr,n-1,i,p+1);
}
void printAllp(int arr[],int n,int i,int p){
    if (p==n)
    {
        return;
    }
    if (arr[p]==i)
    {
        cout<<p<<" ";
    }
    printAllp(arr,n,i,p+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i;
    cin>>i;
    int point=0;
    cout<<firstNum(arr,n,i,point)<<endl;
    cout<<lastNum(arr,n,i,point)<<endl;
    printAllp(arr,n,i,point);
}