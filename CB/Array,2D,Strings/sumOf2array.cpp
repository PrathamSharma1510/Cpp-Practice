#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int end1 = n - 1;
    int end2 = m - 1;
    int x=max(n,m);
    int ans[x];
    int end3=x-1;
    int carry=0;
    while (end3>=0)
    {
        int sum=carry;
        if(end1>=0){
            sum+=arr1[end1];
        }
        if(end2>=0){
            sum+=arr2[end2];
        }
        // cout<<sum;
        ans[end3]=sum%10;
        // cout<<ans[end3];
        carry=sum/10;
        end1--;
        end2--;
        end3--;
    }
    if(carry!=0){
        cout<<carry<<", ";
    }
    // cout<<ans[0];
    for (int i = 0; i <= (x-1); i++)
    {
        cout<<ans[i]<<", ";
    }
    cout<<"END";
    return 0;
}