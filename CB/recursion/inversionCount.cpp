#include <iostream>
using namespace std;
int merge(int arr[],int l,int r,int mid){
    int inv=0;
    int left_s=mid-l+1;
    int right_s=r-mid;
    int a[left_s];
    int b[right_s];
    for (int i = 0; i < left_s; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < right_s; i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;int j=0;int k=l;
    while (i<left_s && j<right_s)
    {
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            inv+=left_s-i;
            arr[k]=b[j];
            k++;j++;
        }
    }
    while (i<left_s)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while (j<right_s)
    {
        arr[k]=b[j];
        j++;k++;
    }
    return inv;
}
int mergesort(int arr[], int l, int r)
{
    int inversion = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inversion += mergesort(arr, l, mid);
        inversion += mergesort(arr, mid + 1, r);
        inversion += merge(arr,l,r,mid);
    }
    return inversion;
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
    cout<<mergesort(arr, 0, num - 1)<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i];
    }
}