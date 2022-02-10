#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num)
    {
        char a[1000];
        char b[1000];
        cin >> a;
        cin >> b;
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == b[i])
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }cout<<endl;
        num--;
    }
    return 0;
}