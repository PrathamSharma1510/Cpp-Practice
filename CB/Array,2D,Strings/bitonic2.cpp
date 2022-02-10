#include <iostream>
using namespace std;
int bitonic(int arr[], int n)
{
    int inc[n];
    int dec[n];
    int max1;
    inc[0] = 1;
    dec[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
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
        if (arr[i] >= arr[i + 1])
        {
            dec[i] = dec[i + 1] + 1;
        }
        else
        {
            dec[i] = 1;
        }
    }
    max1=0;
    for (int i = 0; i < n; i++)
    {
        max1=max(max1,inc[i]+dec[i]-1);
    }
    return max1;
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << bitonic(arr, n) << endl;
        num--;
    }
}