#include <iostream>
#include<algorithm>
using namespace std;
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
        // for (int i = 0; i < num; i++)
        // {
        //     cout<<s[i].first<<" ";
        //     cout<<s[i].second;
        //     cout<<endl;
        // }
        for (int i = 1; i < num; i++)
        {
            if (s[i].first >= s[i - 1].second)
            {
                work++;
            }
            else
            {
                s[i].first = s[i - 1].first;
                s[i].second = s[i - 2].second;
            }
        }
        cout << work;
        n--;
    }
    return 0; 
}