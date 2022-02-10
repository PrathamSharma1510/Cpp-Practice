#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr1[num];
    int arr2[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < num; i++)
    {
        cin >> arr2[i];
    }
    int ans = num - 1;
    int i = 0;
    int j = 0;
    int an[num];
    int pointer1 = 0;
    int k = 0;
    while (k<=ans)
    {
        if (arr1[i] < arr2[j])
        {
            an[k]=arr1[i];
            i++;
        }
        else
        {
            an[k]=arr2[j];
            j++;
        }
        k++;
    }
    cout<<an[num-1];
    // for (int i = 0; i <num; i++)
    // {
    //     cout<<an[i]<<" ";
    // }
    
}