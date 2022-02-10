#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void cycleSort(int arr[],int n){
    int i=0;
    int an=1;
    while (i<n)
    {
        int check=arr[i]-1;
        if(arr[i]!=arr[check]){
            swap(arr[i],arr[check]);
        }
        else{
            i++;
        }
    }
    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cycleSort(arr,n);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}