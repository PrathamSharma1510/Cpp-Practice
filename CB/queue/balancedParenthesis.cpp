#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s)
{
    stack<char> paren;
    for (char &c : s)
    {
        switch (c)
        {
        case '(':
        case '{':
        case '[':
            paren.push(c);
            break;
        case ')':
            if (paren.empty() || paren.top() != '(')
                return false;
            else
                paren.pop();
            break;
        case '}':
            if (paren.empty() || paren.top() != '{')
                return false;
            else
                paren.pop();
            break;
        case ']':
            if (paren.empty() || paren.top() != '[')
                return false;
            else
                paren.pop();
            break;
        default:;
        }
    }
    return paren.empty();
}
int main()