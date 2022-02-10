#include <iostream>
using namespace std;
typedef long long ll;
char s[200010];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s + 1);
        int n = strlen(s + 1);
        int l = 1, r = 1, ans = 1e9;
        int a[3] = {0};
        while (r <= n)
        {
            while (r <= n && (a[0] == 0 || a[1] == 0 || a[2] == 0))
                ++a[s[r++] - '1'];
            if (a[0] == 0 || a[1] == 0 || a[2] == 0)
                break;
            while (l <= r && a[s[l] - '1'] > 1)
                --a[s[l++] - '1'];
            ans = min(ans, r - l);
            --a[s[l++] - '1'];
        }
        if (ans == 1e9)
            ans = 0;
        cout << ans << '\n';
    }
    return 0;
}