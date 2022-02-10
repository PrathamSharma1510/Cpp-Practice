#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char op[100];
    int num1, num2;
    cin >> op;
    cin >> num1 >> num2;
    if (op[0] == 'm' && op[1]=='a')
    {
        cout << max(num1, num2);
    }
    if (op[0] =='m' && op[1]=='i')
    {
        cout << min(num1, num2);
    }
    switch (op[0])
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << fixed << setprecision(0) << num1 / num2;
        break;
    }

    return 0;
}