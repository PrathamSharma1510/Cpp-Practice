#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[e+1];
    while (j <= e && i <= mid)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (j <= e)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    for (int y = s; y <= e; y++)
    {
        arr[y] = temp[y];
    }
}
void mergesort(int arr[], int s, int e)
{
    //base condition
    if (s >= e)
    {
        return;
    }
    //recurssive call
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    //merge the array
    merge(arr, s, e);
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
    int s = 0;
    mergesort(arr, s, num - 1);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}