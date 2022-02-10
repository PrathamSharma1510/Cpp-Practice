#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
// int main() {
//     int a,b;
//     cin>>a>>b;
//     int g=gcd(a,b);
//     int ans=1;
//     ans=(a*b)/g;
//     cout<<ans;
// 	return 0;
// }
int main()
{
    int a = 5;
    int arr[a][2];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        int a,b;
        for (int j = 0; j < 1; j++)
        {
            a = arr[i][j];
            b = arr[i][j + 1];
        }
        int g = gcd(a, b);
        int ans = 1;
        ans = (a * b) / g;
        cout << ans<<endl;
    }
}