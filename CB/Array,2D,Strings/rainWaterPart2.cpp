#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int max1 = 0;
    int max2 = 0;
    int left[num];
    int right[num];
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        max1 = max(max1, arr[i]);
        left[i] = max1;
    }
    for (int i = num - 1; i >= 0; i--)
    {
        max2 = max(max2, arr[i]);
        right[i] = max2;
    }
    for (int i = 0; i < num; i++)
    {
        cout<<left[i]<<" ";
    }cout<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<right[i]<<" ";
    }cout<<endl;
    for (int i = 1; i <= num - 2; i++)
    {
        sum+= (min(left[i], right[i])-arr[i]);
        cout<<sum<<" ";
    }
    cout << sum;
}