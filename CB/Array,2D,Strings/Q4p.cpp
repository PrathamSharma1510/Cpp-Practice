#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i = 0; i <=n; i++)
	{
		for (int j = 1; j<n; j++)
		{
			if (j<=i)
			{
				cout<<j<<" ";
			}
			else{
				cout<<" "<<" ";
			}
		}
		for (int k =(2*n); k>n; k--)
		{
			if ((k-n)<=i)
			{
				cout<<k-n<<" ";
			}
			else{
				cout<<" "<<" ";
			}
		}cout<<endl;
	}
	
	return 0;
}