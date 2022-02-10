#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for (int i = 0; i <=num; i++)
    {
        int x=2*(i)-1; 
        for (int j=num; j>0; j--)
        {
            if (i==1)
            {
                if(j==1){
                    cout<<1;
                }
                else{
                    cout<<" ";
                }
            }
            else if (j>(num-i))
            {
                cout<<" ";
            }
            else{
                cout<<x;
                x--;
            }
        }cout<<endl;
    }
    
	return 0;
}