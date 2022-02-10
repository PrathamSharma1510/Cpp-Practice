#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int max1 = 0;
    int sum = 0;
    for (int i = 1; i <= num -1; i++)
    {
        max1 = max(max1, arr[i - 1]);
        if ((arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) || arr[i] < max1)
        {
            int max2 = 0;
            for (int j = i + 1; j < num; j++)
            {
                max2 = max(max2, arr[j]);
            }
            int x = min(max2, max1);
            if ((x - arr[i])>0)
            {
                // cout << arr[i - 1] << " " << arr[i + 1] << " ";
                sum += (x - arr[i]);
                // cout << sum << " ";
            }
        }
    }
    cout << sum;
}