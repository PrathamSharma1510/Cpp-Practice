#include <iostream>
#include <algorithm>
using namespace std;
void ref(int &l, int &s)
{
    cout << l << endl;
    cout<<s;
    return;
}
void sl(int N1, int N2, int N3)
{
    int c=max(max(N1,N2),N3);
    int d=min(min(N1,N2),N3);
    ref(c,d);
}

int main()
{

    int x, y, z;
    cin >> x>>y >>z;
    sl(x,y,z);
}