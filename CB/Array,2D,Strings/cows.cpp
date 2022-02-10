#include <iostream>
using namespace std;
bool cow_sepratio(int arr[], int num, int mid, int cow)
{
    int lcow=arr[0];
    int cnt=1;
    for (int i = 1; i < num; i++)
    {
        if (arr[i]-lcow>=mid)
        {
            lcow=arr[i];
            cnt++;
            if(cnt==cow){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int num, cow;
    cin >> num >> cow;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    int end = arr[num - 1]-arr[0];
    int ans = 0;
    while (s <= end)
    {
        int mid = (s + end) / 2;
        if (cow_sepratio(arr, num, mid, cow))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}