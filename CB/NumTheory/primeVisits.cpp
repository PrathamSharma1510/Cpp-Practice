#include <iostream>
using namespace std;
void PrimeSieve(int *arr)
{
    for (long long int i = 2; i <= 1000000; i += 2)
    {
        arr[i] = 1;
    }
    for (long long int i = 3; i <= 1000000; i += 2)
    {
        if (arr[i] == 0)
        {
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
    int num;
    cin>>num;
    while (num)
    {
        int a, b;
        cin >> a >> b;
        int arr[1000000] = {0};
        PrimeSieve(arr);
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (arr[i] == 0)
            {
                count++;
                // cout<<i<<" ";
            }
        }
        cout << count<<endl;
        num--;
    }
}