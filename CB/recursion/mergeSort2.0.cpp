#include <iostream>
using namespace std;
void merge(int arr[], int s, int e, int mid)
{
    int l_size = mid - s + 1;
    int r_size = e - mid;
    int a[l_size];
    int b[r_size];
    for (int i = 0; i < l_size; i++)
    {
        a[i] = arr[s + i];
    }
    for (int i = 0; i < r_size; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while (i < l_size && j < r_size)
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
    while (j < r_size)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    while (i < l_size)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
}
void mergesort(int arr[], int s, int e)
{
    //base condition
    if (s < e)
    {
        //recurssive call
        int mid = (s + e) / 2;
        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        //merge the array
        merge(arr, s, e, mid);
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
    mergesort(arr, 0, num - 1);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}