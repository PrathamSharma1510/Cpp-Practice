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
    for (int i = 0; i < num; i++)
    {
        int j = i;
        while (true)
        {
            if (i == 0 || j == 0)
            {
                break;
            }
            else if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
            else
            {
                break;
            }
            j--;
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}