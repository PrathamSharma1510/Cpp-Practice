#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if (n==1)
    {
        return true;
    }
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}
int main(){
   int n;
   cin>>n;
//    int arr[n];
   int arr[]={1,2,3,4,5,6};
//    for (int i = 0; i < n; i++)
//    {
//        cin>>arr[i];
//    }
   cout<<sorted(arr,n);
}