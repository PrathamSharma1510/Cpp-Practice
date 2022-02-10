#include<iostream>
using namespace std; 
int main(){
    int row1, col1,row2,col2;
    cin >> row1 >> col1>>row2>>col2;
    int arr[row1][col1];
    for (int i = 0; i <= row1 - 1; i++)
    {
        for (int j = 0; j <= col1 - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int arr2[row2][col2];
    for (int i = 0; i <= row2 - 1; i++)
    {
        for (int j = 0; j <= col2- 1; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int ans[row1][col2];
    for (int i = 0; i <= row1 - 1; i++)
    {
        for (int j = 0; j <= col2- 1; j++)
        {
            ans[i][j]=0;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j= 0; j<col2; j++)
        {
            for (int k= 0; k< col1; k++)
            {
                ans[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
     for (int i = 0; i <= row1 - 1; i++)
    {
        for (int j = 0; j <= col2- 1; j++)
        {
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}