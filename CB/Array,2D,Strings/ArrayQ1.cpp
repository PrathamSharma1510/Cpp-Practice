#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    sort(arr, arr + s);
    // for (int i = 0; i < s; i++)
    // {
    //     for (int j = i + 1; j < s; j++)
    //     {
    //         for (int k = j + 1; k < s; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == t)
    //             {
    //                 cout << arr[i] << ", "<< arr[j]<< " and "<<arr[k]<< endl;
    //             }
    //         }
    //     }
    // }
    for (int i = 0; i < s; i++)
    {
        int j = i + 1;
        int k = s - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == t)
            {
                cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                j++;
                k--;
            }
            else if (arr[i] + arr[j] + arr[k] > t)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return 0;
}