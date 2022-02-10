#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    char arr[row][col];
    int minPow, strength;
    cin >> minPow >> strength;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool ans = true;
    for (int i = 0; i < row; i++)
    {
        bool star = false;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == '.')
            {
                strength = strength - 2;
            }
            else if (arr[i][j] == '*')
            {
                strength = strength + 5;
            }
            else if (arr[i][j] == '#')
            {
                star = true;
                break;
            }
            if (strength < minPow)
            {
                ans = false;
                break;
            }
            if (j != col - 1)
            {
                strength--;
            }
        }
        if (strength < minPow)
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "True" << endl;
        cout << strength;
    }
    else
    {
        cout << "fasle";
    }
}