#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int length = 1;
        cout << s[i];
        int j=i;
        for (;j < s.size(); j++)
        {
            if (s[j] == s[j + 1])
            {
                length++;
            }
            else{
                break;
            }
        }
        if(length!=1){
            s.erase(i,length-1);
        }
        cout<<length;
    }

    return 0;
}