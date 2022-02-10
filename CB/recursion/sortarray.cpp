#include<iostream>
using namespace std;
bool checkSorted(int arr[],int n){
    if(n==0){ 
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    return checkSorted(arr+1,n-1);
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int s=0;
    cout<<checkSorted(arr,num-1);
}