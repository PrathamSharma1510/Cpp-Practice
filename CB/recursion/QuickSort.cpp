#include <iostream>
using namespace std;
int pivortfind(int *arr,int s,int e){
    int i=s-1;
    int j=s;
    int piv=arr[e];
    for (;j<=e-1;)
    {
        if(arr[j]<=piv){
            i++;
            swap(arr[i],arr[j]); 
        }
        j=j+1;
    }
    swap(arr[e],arr[i+1]);
    return i+1;
}
void quicksort(int *arr, int s, int e)
{
    if(s>=e){
        return;
    }
    int pivort=pivortfind(arr,s,e);
    quicksort(arr,s,pivort-1);
    quicksort(arr,pivort+1,e);
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
    quicksort(arr, s, num - 1);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}