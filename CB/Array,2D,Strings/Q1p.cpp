#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int t1=0;
    int t2=1;
    int replace;
    for (int i = 0; i <= num; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (i==1)
            {
                cout<<t1;
            }
            else if (i==2 && j==1)
            {
                cout<<t2;
                break;
            }
            else{
                replace=t1+t2;
                cout<<replace<<" ";
                t1=t2;
                t2=replace;
            }
        }cout<<endl; 
    }
    
	return 0;
}