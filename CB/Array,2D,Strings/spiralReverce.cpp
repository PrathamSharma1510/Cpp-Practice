#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int left = 0;
    int right = col - 1;
    int top = 0;
    int bottom = row - 1;
    while (right >= left && bottom >= top)
    {
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][left] << ", ";
        }
        left++;
        for (int i = left; i <= right; i++)
        {
            cout << arr[bottom][i] << ", ";
        }
        bottom--;
        if (right >= left)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][right] << ", ";
            }
            right--;
        }
        if (bottom >= top)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[top][i] << ", ";
            }
            top++;
        }
    }
    cout<<"END";
    return 0;
}