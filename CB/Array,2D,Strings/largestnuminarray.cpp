#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(int a, int b)
{
    // cout<<a<<" "<<b<<endl;
        string x, y;
    x = to_string(a);
    x += to_string(b);
    y = to_string(b);
    y += to_string(a);
    // cout<<x<<" "<<y<<endl;
    if (y > x)
        return true;
    else
        return false;
}
int main()
{
    int A;
    cin >> A;
    vector<int> vs;
    for (int i = 0; i < A; i++)
    {
        int a;
        cin >> a;
        vs.push_back(a);
    }
    sort(vs.begin(), vs.end(), comp);
    string ans = "";
    for (int i = vs.size() - 1; i > -1; i--)
    {
        ans += to_string(vs[i]);
    }
    cout << ans << endl;
}