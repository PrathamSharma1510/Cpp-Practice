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
    int top = 0;
    int left = 0;
    int down = row - 1;
    int right = col - 1;
    while (top <= down && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top = top + 1;
        
        for (int i = top; i <= down; i++)
        {
            cout << arr[i][right] << " ";
        }
        right = right - 1;

        if (down > top)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[down][i] << " ";
            }
            down = down - 1;
        }
        
        if (right > left)
        {
            for (int i = down; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left = left + 1;
        }
    }
}