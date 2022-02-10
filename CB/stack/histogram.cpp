#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void ans(vector<int> v)
{
    int h = v.size();
    stack<int> s;
    int small[h];
    for (int i = 0; i < h; i++)
    {
        while (!s.empty() and v[s.top()] >= v[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            small[i] = 0;
        }
        else
        {
            small[i] = s.top() + 1;
        }
        s.push(i);
    }
    stack<int> l;
    int large[h];
    for (int i = h-1; i >=0; i--)
    {
        while (!l.empty() and v[l.top()] >= v[i])
        {
            l.pop();
        }
        if (l.empty())
        {
            large[i]=h-1;
        }
        else
        {
            large[i] = l.top() - 1;
        }
        l.push(i);
    }
    int ma=0;
    for (int i = 0; i < h; i++)
    {
        int c=v[i]*(large[i]-small[i]+1);
        ma=max(ma,c);
    }
    cout<<ma;
}
int main()
{
    int num;
    cin >> num;
    vector<int> v;
    for (int i = 0; i < num; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    ans(v);
}