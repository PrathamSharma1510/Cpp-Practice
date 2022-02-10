#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> ans(vector<int> v)
{
    stack<int> s;
    int f=v.size();
    vector<int> a(v.size());
    for (int i = 0; i <= 2*v.size()-1; i++)
    {
        while (!s.empty() && v[s.top()] < v[i%f])
        {
            a[s.top()] = i%f;
            s.pop();
        }
        s.push(i%f);
    }
    while (!s.empty())
    {
        a[s.top()]=-1;
        s.pop();
    }
    return a;
}
int main()
{
    int num;
    cin >> num;
    vector<int> v;
    for (int i = 0; i < num; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    vector<int> an = ans(v);
    for (int i = 0; i < an.size(); i++)
    {
        if(an[i]== -1 ){
            cout<<-1<<" ";
        }
        else{
            cout<<v[an[i]]<<" ";
        }
    }
}