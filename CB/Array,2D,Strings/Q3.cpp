#include<iostream>
using namespace std;
int main() {
    int start,end,intervel;
    cin>>start>>end>>intervel;
    for (int i = start; i<=end; i=i+intervel)
    {
        int cel=(5*(i-32))/9;
        cout<<i<<" "<<cel<<endl;
    }
	return 0;
}