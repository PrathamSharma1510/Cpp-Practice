#include <iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i = 0; i <=row-1; i++)
    {
        for (int j = 0; j<=col-1; j++)
        {
            cin>>arr[i][j];
            // cout<<arr[i][j]<<" ";
        }cout<<endl;   
    }
    
    //wave print
    for (int i = 0; i < col; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j< row; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for (int j = row-1; j>=0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
    
}