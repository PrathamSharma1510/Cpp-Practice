#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j< i; j++)
        {
            if (i==1)
            {
                cout<<1;
                break;
            }
            else
            {
                if(j==0){
                    cout<<i<<" ";
                }
                else if (j<(i-1) && j!=0)
                {
                    cout<<0<<" ";
                }
                else{
                    cout<<i<<" ";
                }
            }
        }cout<<endl;
    }
    
	return 0;
}