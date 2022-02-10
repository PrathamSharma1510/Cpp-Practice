#include <iostream>
using namespace std;
int kadens(int arr[], int n)
{
    int maxsum = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x += arr[i];
        if (x > maxsum)
        {
            maxsum = x;
        }
        if (x < 0)
        {
            x = 0;
        }
    }
    return maxsum;
}
int main()
{
    int num;
    cin >> num;
    while (num != 0)
    {
        int n;
        cin >> n;
        int arr[n];
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans1 = kadens(arr, n);
        for (int i = 0; i < n; i++)
        {
            total += arr[i];
            arr[i]=-arr[i];
        }
        int Not_include = kadens(arr, n);
        int ans2 = Not_include + total;
        int finalAns = max(ans1, ans2);
        cout << finalAns;
        num--;
    }
}