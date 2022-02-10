#include <iostream>
using namespace std;
void Primesieve(int arr[], int n)
{
    for (int i = 2; i <= n; i += 2)
    {
        arr[i] = 1;
    }
    for (int i = 3; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j=j+i)
            {
                arr[j] = 1;
            }
        }
    }
    arr[0]=arr[1]=1;
    arr[2]=0;
}
int main()
{
    int n;
    int d;
    cin >> n;
    cin>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    Primesieve(arr, n);
    for (int i = d; i < n; i++)
    {
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}