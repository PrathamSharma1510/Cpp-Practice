#include<iostream>
using namespace std; 
void sum(int arr1[3][2][2],int arr2[3][2][2],int size){
    cout<<"Enter " << size * 4 << " elements\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "[" << i << "]" << "[" << j << "]" << "[" 
                << k << "]=" <<arr1[i][j][k]+arr2[i][j][k]<<endl;
            }
            
        }
        
    }
    
}

int main ()
{
    int a;
    int d=3;
    int arr1[d][2][2];
    int arr2[d][2][2];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin>>arr1[i][j][k];
            }
            
        } 
    }
     for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin>>arr2[i][j][k];
            }
            
        }  
    }
    sum(arr1,arr2,d);
}