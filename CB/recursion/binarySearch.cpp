#include <iostream>
using namespace std;
bool binary_search(int arr[], int key, int s, int end)
{
    if (end >= s)
    {
        int mid = (s + end) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            return binary_search(arr, key, mid + 1, end);
        }
        else
        {
            return binary_search(arr, key, s, mid - 1);
        }
    }
    return false;
}
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int s = 0;
    int end = num - 1;
    cout << binary_search(arr, key, s, end);
}