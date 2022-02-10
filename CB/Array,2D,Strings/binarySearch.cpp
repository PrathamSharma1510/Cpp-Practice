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
    int key;
    cin>>key;
    int s=0;
    int end=num-1;
    int ans=-1;
    while (s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==key){
            ans=mid;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans;
	return 0;
}