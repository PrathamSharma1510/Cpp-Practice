#include <iostream>
using namespace std;
string replaceD(string a){
    if(a.size()==0){
        return "";
    }
    char s=a[0];
    string ans=replaceD(a.substr(1));
    if(s==ans[0]){
        return ans;
    }
    return s+ans;
}
// void replaceD(char a[])
// {
//     if (a[0] == '\0')
//     {
//         return;
//     }
//     else if (a[0] == a[1])
//     {
//         replaceD(a + 1);
//     }
//     else
//     {
//         cout << a[0];
//         replaceD(a+1);
//     }
// }
int main()
{
    // char a[1000];
    // cin >> a;
    // replaceD(a);
    string s;
    cin>>s;
    cout<<replaceD(s);
}