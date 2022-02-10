#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e=num-1;
    int ans=0;
    while (s<=e)
    {
        int mid=(e+s)/2;
        if(arr[mid]<=arr[e]){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<arr[ans];
	return 0;
}