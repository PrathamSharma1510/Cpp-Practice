#include <iostream>
#include<algorithm>
using namespace std;
bool com(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int num;
        cin >> num;
        pair<int, int> s[num];
        int work = 1;
        for (int i = 0; i < num; i++)
        {
            cin >> s[i].first;
            cin >> s[i].second;
        }
        sort(s,s+num,com);
        for (int i = 1; i < num; i++)
        {
            // cout<<s[i - 1].second<<", ";
            if (s[i].first >= s[i - 1].second)
            {
                // cout<<work<<" ";
                work++;
            }
            else
            {
                s[i].first = s[i - 1].first;
                s[i].second = s[i - 1].second;
            }
        }
        cout << work<<endl;
        n--;
    }
    return 0; 
}