#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
int main()
{
    int x;
    cin >> x;
    while (x)
    {
        ll n;
        long long int k;
        cin >> n;
        cin >> k;
        long long int start = 1;
        long long int end = n;
        long long int ans = 0;
        while (start <= end)
        {
            long long int mid = (start + end) / 2;
            if (pow(mid, k)== n)
            {
                ans = mid;
                break;
                // start = mid + 1;
            }
            else if(pow(mid, k)<n){
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << ans << endl;
        x--;
    }
}