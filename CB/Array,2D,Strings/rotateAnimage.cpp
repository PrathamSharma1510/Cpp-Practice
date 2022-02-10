#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <col; i++)
    {
        int start = 0;
        int end = row - 1;
        while (end > start)
        {
            swap(arr[start][i],arr[end][i]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j= i+1; j<col; j++)
        {
            swap(arr[i][j],arr[j][i]);
        } 
    }
    for (int i = 0; i<= row - 1; i++)
    {
        for (int j = 0; j<= col - 1; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}