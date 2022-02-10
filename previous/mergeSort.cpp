#include <iostream>
using namespace std;
void merge(int arr[], int s, int end, int mid)
{
    int n2 = end - mid;
    int n1 = mid - s + 1;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[s + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
int mergeSort(int arr[], int s, int end)
{
    if (s < end)
    {
        int mid = (s + end) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, s, end, mid);
    }
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
    mergeSort(arr, 0, num - 1);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}