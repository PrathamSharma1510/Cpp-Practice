#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool com(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
int main()
{
    // int n;
    // cin >> n;
    // while (n)
    // {
        int num;
        cin >> num;
        vector<pair<int,int> >s;
        int work = 1;
        int start,end;
        for (int i = 0; i < num; i++)
        {
            cin>>start;
            cin>>end;
            s.push_back(make_pair(start,end));
        }
        sort(s.begin(),s.end(),com);
        for (int i = 0; i < num; i++)
        {
            cout<<s[i].first<<" ";
            cout<<s[i].second;
            cout<<endl;
        }
    //     for (int i = 1; i < num; i++)
    //     {
    //         // cout<<s[i - 1].second<<", ";
    //         if (s[i].first >= s[i - 1].second)
    //         {
    //             // cout<<work<<" ";
    //             work++;
    //         }
    //         else
    //         {
    //             s[i].first = s[i - 1].first;
    //             s[i].second = s[i - 1].second;
    //         }
    //     }
    //     cout << work<<endl;
    //     n--;
    // }
    return 0; 
}