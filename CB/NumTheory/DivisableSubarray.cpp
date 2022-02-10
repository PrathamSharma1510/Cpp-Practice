#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int n;
        cin >> n;

        int arr[n];
        int ans[n];
        // memset(ans, 0, sizeof(ans));
        for (int i = 0; i < n; i++)
        {
            ans[i] = 0;
        }
        ans[0] = 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            sum = sum % n;
            if (sum<0)
            {
                sum = (sum + n) % n;
            }
            ans[sum]++;
        }
        long long int var_ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long int x = ans[i];
            var_ans += (x) * (x - 1) / 2;
        }
        cout << var_ans << endl;
    }
    return 0;
}