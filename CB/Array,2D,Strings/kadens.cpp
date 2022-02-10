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
        int maxsum = 0;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            maxsum += arr[i];
            if (x < maxsum)
            {
                x = maxsum;
            }
            if (maxsum < 0)
            {
                maxsum = 0;
            }
        }
        cout << x<<endl;
        num--;
    }
}