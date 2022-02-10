#include <iostream>
using namespace std;
int firstocurrance(int arr[], int s, int key)
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
int lastocurrance(int arr[], int s, int key)
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
            start = mid + 1;
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
    int nu;
    cin >> nu;
    int q[nu];
    for (int i = 0; i < nu; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < nu; i++)
    {
        cout<<q[i]<<endl;
        cout << arr[firstocurrance(arr, num, q[i])] << " ";
        cout << arr[lastocurrance(arr, num, q[i])] << endl;
    }
}