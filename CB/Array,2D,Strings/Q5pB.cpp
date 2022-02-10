#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for (int i = 0; i <=num; i++)
    {
        int x=2*(i)-1;
        int y=2*(i)-2;
        for (int j=0; j<num; j++)
        {
            if (i==1)
            {
                if(j==num-1){
                    cout<<1<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
            else if (j<(num-i))
            {
                cout<<" "<<" ";
            }
            else{
                cout<<x-i+1<<" ";
                x++;
            }
        }
        for (int k=num;k<num*2;k++)
        {
            if (i==1)
            {
                break;
            }
            else if(k<(num+i-1)){
                cout<<y<<" ";
                y--;
            }
        }cout<<endl;
        
    }
    
	return 0;
}