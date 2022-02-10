#include <iostream>
using namespace std;
int last_occurance(int arr[], int se, int key)
{
    int s = 0;
    int e = se - 1;
    int occ = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == arr[mid])
        {
            occ = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return occ;
}
int first_ocurrance(int arr[], int s, int key)
{
    int start = 0;
    int end = s - 1;
    int occu = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            occu = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return occu;
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
    int n;
    cin >> n;
    int key[n];
    for (int i = 0; i < n; i++)
    {
        cin >> key[i];
    }
    for (int i = 0; i < n; i++)
    {
        // cout << key[i] << " ";
        cout << first_ocurrance(arr, num, key[i]) << " ";
        cout << last_occurance(arr, num, key[i]) << endl;
    }
    return 0;
}