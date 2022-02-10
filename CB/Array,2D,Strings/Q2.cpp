#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool ans=false;
    if (n<=0 && n<=1e9)
    {
        cout<<-1;
    }
    else{
    for (int i = n; i <= 10000000; i++)
    {
        for (int j = i+1; j <= 10000000; j++)
        {      
            if ((n*n)+(i*i)==(j*j) && (n+i>j))
            {
                ans=true;
                cout<<i<<" "<<j;
                break;
            }
			if(n+i<j){
				break;
			}
        }
        if (ans==true)
        {
            break;
        }
    }
    if (ans==false)
    {
        cout<<-1;
    }
    }
	return 0;
}