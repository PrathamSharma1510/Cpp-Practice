#include <iostream>
using namespace std;
void replace(char a[],char b,char ch){
    if (a[0]=='\0')
    {
        return;
    }
    if (a[0]==b)
    {
        a[0]=ch;
    }
    replace(a+1,b,ch);
}
int main(){
    char a[100];
    cin>>a;
    char b,ch;
    cin>>b>>ch;
    cout<<a<<endl;
    replace(a,b,ch);
    cout<<a;
}