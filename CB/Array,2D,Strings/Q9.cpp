#include<iostream>
using namespace std;
int main() {
    char a;
    while (true)
    {
        cin>>a;
        if (a=='X' || a=='x')
        {
            break;
        }
        else if(a!='*' && a!='-' && a!='+' && a!='/' && a!='%'){
            cout<<"Invalid operation. Try again."<<endl;
        }
        else{
        int t,y;
        cin>>t>>y;
        switch (a)
        {
        case '*':
            cout<<t*y<<endl;
            break;
        case '-':
            cout<<t-y<<endl;
            break;
        case '+':
            cout<<t+y<<endl;
            break;
        case '/':
            cout<<t/y<<endl;
            break;
        case '%':
            cout<<t%y<<endl;
            break;
        default:
            cout<<"Invalid operation. Try again.";
            break;
        }
        }
    }
}