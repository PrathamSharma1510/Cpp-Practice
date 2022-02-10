#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> ans(vector<int> v)
{
    stack<int>s;
    int n=v.size();
    vector<int>ans(n,-1);
    for (int i = 2*n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()<=v[i%n]){
            s.pop();
        }
        if(i<n){
            if(!s.empty()){
                ans[i]=s.top();
            }
        }
        s.push(v[i%n]);
    }
    return ans;
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
    vector<int> a=ans(v);
    for (int i = 0; i < num; i++)
    {
        cout<<a[i]<<" ";
    }
}