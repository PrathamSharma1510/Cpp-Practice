#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
void PrimeSieve(int *arr, int *v)
{
    for (long long int i = 2; i <= 1000000; i += 2)
    {
        arr[i] = 1;
    }
    v[1] = 2;
    int x = 1;
    for (long long int i = 3; i <= 1000000; i += 2)
    {
        if (arr[i] == 0)
        {
            x++;
            v[x] = i;
            for (long long int j = i * i; j < 1000000; j = j + i)
            {
                arr[j] = 1;
            }
        }
    }
    arr[2] = 0;
    arr[0] = arr[1] = 1;
}
int main()
{
    ll n;
    cin >> n;
    int arr[1000000] = {0};
    int v[100000] = {0};
    PrimeSieve(arr, v);
    while (n)
    {
        ll num;
        cin >> num;
        cout << v[num] << endl;
        n--;
    }
}