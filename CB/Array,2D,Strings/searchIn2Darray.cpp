#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    int key;
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin>>key;
    int x=0;
    int y=col-1;
    bool ans=false;
    int pointer=arr[x][y];
    while (x>=0 && x<=(row-1) && y>=0 && y<=(col-1))
    {
        if (arr[x][y]==key)
        {
            ans=true;
            cout<<1;
            break;
        }
        else if (arr[x][y]>key)
        {
            y--;
        }
        else if(arr[x][y]<key){
            x++;
        }
    }
    if (!ans)
    {
        cout<<0;
    }
    
    
}