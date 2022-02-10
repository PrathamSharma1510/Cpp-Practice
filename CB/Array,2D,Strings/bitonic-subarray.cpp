#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int inc[n];
        int dec[n];
        inc[0] = 1;
        dec[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] < arr[i])
            {
                inc[i] = inc[i - 1] + 1;
            }
            else
            {
                inc[i] = 1;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > arr[i + 1])
            {
                dec[i] = dec[i + 1] + 1;
            }
            else
            {
                dec[i] = 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, (inc[i] + dec[i] - 1));
        }
        cout << ans << endl;
        num--;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<dec[i]<<" ";
    // }
    // int dec = 1;
    // int inc = 1;
    // int ans = 1;
    // bool in = false;
    // bool de = false;
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i - 1] > arr[i])
    //     {
    //         dec++;
    //         de = true;
    //     }
    //     else if (arr[i - 1] < arr[i])
    //     {
    //         dec = 0;
    //         inc++;
    //         in = true;
    //     }
    //     ans = max(dec, inc);
    //     if (de && in)
    //     {
    //         ans = max(ans, (dec + inc));
    //     }
    // }
    // cout << ans << endl;
}