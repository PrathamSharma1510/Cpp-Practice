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
    int e=num-1;
    int ans=-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
        }
        else if (arr[s]<=arr[mid])
        {
            if(key>=arr[s] && key<=arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key<=arr[e] && key>=arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    cout<<ans;
	return 0;
}