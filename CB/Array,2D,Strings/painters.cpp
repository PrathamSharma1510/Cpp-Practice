#include<iostream>
// #include<algorithm>
using namespace std;
bool is_possible(int arr[],int n,int k,int t,int mid){
    int x=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        x+=arr[i];
        if (x>mid && arr[i]<=mid)
        {
            x=arr[i];
            cnt++;
            if (cnt==k)
            {
                return false;
            }
        }
        // else if(arr[i]>mid){
        //     return false;
        // }
        // cout<<x<<" ";
    }
    return true;
}
int main() {
    int n,k,t;
    cin>>n>>k>>t;
    int arr[n];
    int sum=0;
    int s=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        s=max(s,arr[i]);
    }
    // sort(arr,arr+n);
    int end=sum;
    int ans=0;
    while (s<=end)
    {
        int mid=(s+end)/2;
        if (is_possible(arr,n,k,t,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<(ans*t)% 10000003;
	return 0;
}