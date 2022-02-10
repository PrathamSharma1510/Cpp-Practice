#include <iostream>
using namespace std;
void permutation(string a,int i)
{
    if (i==a.size())
    {
        cout<<a<<endl;
        return;
    }
    for (int j=i;j<a.size();j++)
    {
       swap(a[i],a[j]);
       permutation(a,i+1);
       swap(a[i],a[j]);
    }
}
int main()
{
    string a;
    cin >> a;
    // string ans = "";
    permutation(a,0);
}