#include<iostream>
#include<algorithm>
using namespace std;
int median(int arr[],int n){
    sort(arr,arr+n);
    return(arr[n/2]);
}
int pivort(int arr[],int n){
    int a=
}
int main()
{
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr)/sizeof(arr[0]), k = 3;
    cout << "K'th smallest element is ";
    return 0;
}