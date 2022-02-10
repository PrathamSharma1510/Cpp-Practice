#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int arr[row][row];
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= row- 1; j++)
        {
            cin >> arr[i][j];
        }
    }
     for (int i = 0; i <row; i++)
    {
        int start = 0;
        int end = row - 1;
        while (end > start)
        {
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j= i; j< row; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= row- 1; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}