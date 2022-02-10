#include <iostream>
using namespace std;
string xToEn(string s)
{
    if (s.size() == 0)
    {
        return "";
    }
    char a=s[0];
    string ans=xToEn(s.substr(1));
    if(a=='x'){
        return ans+a;
    }
    else{
        return a+ans;
    }
}
int main()
{
    string s;
    cin >> s;
    cout << xToEn(s);
}