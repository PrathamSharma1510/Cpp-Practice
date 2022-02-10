#include <iostream>
#include <vector>
using namespace std;
bool com(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    else
    {
        return p1.second > p2.second;
    }
}
int main()
{
    int x;
    cin >> x;
    int num;
    cin >> num;
    vector<pair<string, int> > v;
    for (int i = 0; i < num; i++)
    {
        string b;
        cin >> b;
        int a;
        cin >> a;
        v.push_back(make_pair(b, a));
    }
    sort(v.begin(), v.end(), com);
    for (int i = 0; i < num; i++)
    {
        if(v[i].second>=x){
        cout << v[i].first << " "
             << v[i].second << endl;
        }
    }
    return 0;
}