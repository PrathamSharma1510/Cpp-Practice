#include <iostream>
using namespace std;
void replacePi(char s[],string *ans)
{
    if (s[0] == '\0')
    {
        return;
    }
    else if (s[0] == 'p' && s[1] == 'i')
    {

        *ans=*ans+"3.14";
        replacePi(s + 2,ans);
    }
    else
    {
        *ans=*ans+s[0];
        replacePi(s + 1,ans);
    }
}
int main()
{
    char s[1000];
    cin >> s;
    string ans;
    replacePi(s,&ans);
    cout<<ans;
    // cout<<ans.substr(2);
}