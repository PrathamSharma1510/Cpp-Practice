#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;
    while (i<n)
    {
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n,m;
        cin>>n>>m;
        int arr[n];
        int arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>arr2[i];
        }
        int sumr=0;
        for (int i = 0; i < n; i++)
        {
            sumr+=min(arr[i]*c1,c2);
        }
        int riskamin=min(sumr,c3);
        int sumc=0;
        for (int i = 0; i < m; i++)
        {
            sumc+=min(arr2[i]*c1,c2);
        }
        int cabmin=min(sumc,c3);
        int mainAns=min((cabmin+riskamin),c4);
        cout<<mainAns<<endl;
        i++;
    }
    
	return 0;
}