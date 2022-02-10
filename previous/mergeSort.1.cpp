#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c,d,flag=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	     
	    }
	     for(int i=0;i<n;i++)
	    {
	        if((i+1)%b[i]==0)
	        flag=1;
	        else{
	        flag=0;
	        break;
	        }
	    }
	      if(flag==1)
        cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
	    }
	return 0;
} 
