#include <iostream>
#include <string>
using namespace std;
int main()
{
    // int num;
    // cin >> num;
    // while (num != 0)
    // {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string arr1[n];
        for (int i = 1; i < n; i++)
        {
            string S1= to_string(arr[0]);
            string S2= to_string(arr[i]);
            if ((S1 + S2) > (S2 + S1))
            {
                string s = S1 + S2;
                // cout<<s<<" ";
                long long int ans = stoll(s);
                cout<<ans<<endl;
                arr[0] = ans;
                arr1[i]=s;
            }
            else
            {
                string s = S2 + S1;
                // cout<<s<<" ";
                long long int ans = stoll(s);
                cout<<ans<<endl;
                arr[0] = ans;
                arr1[i]=s;
            }
        }
        cout <<arr1[n-1]<<endl;
    //     num--;
    // }
}