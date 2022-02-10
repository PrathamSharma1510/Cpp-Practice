#include <iostream>
#include <stack>
using namespace std;
bool checkRedundant(string s)
{
    stack<char> st;
    bool x = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            // cout << "IF";
            // cout << st.top() << " ";
            if (st.top() == '(')
            {
                // cout << st.top() << " ";
                x = false;
                // cout << "h" << endl;
                return false;
                break;
            }
            while (st.top() != '(')
            {
                // cout << "while" << endl;
                // cout << st.top() << " ";
                st.pop();
            }
            st.pop();
        }
        else
        {
            st.push(s[i]);
            // cout << "NORMAL" << endl;
            // cout << st.top() << " ";
        }
    }
    return x;
}
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        string s;
        cin >> s;
        bool c = checkRedundant(s);
        if (c)
        {
            cout << "Not Duplicates" << endl;
        }
        else
        {
            cout << "Duplicate" << endl;
        }
    }
}