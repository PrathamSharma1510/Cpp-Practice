#include <iostream>
#include <string>
using namespace std;
int main()
{
    int m, n;
    char str[1000];
    cin >> str;
    int i = 0;
    for (i = 0; str[i + 1] != '\0'; i++)
    {
        m = str[i + 1] - str[i];
        cout << str[i] << m;
    }

    cout << str[i];

    return 0;
}

// int main() {
//     string s;
//     int x=1;
//     cin>>s;
//     int a=s.size();
//     int arr[a-1];
//     for (int j=0; j<a-1; j++)
//     {
//         int ans=s[j+1]-s[j];
//         arr[j]=ans;
//     }
//     for (int i = 0; i < a-1; i++)
//     {
//         string d=to_string(arr[i]);
//         s.insert(x,d);
//         x=x+2;
//     }
//     cout<<s;
// }