#include <iostream>
using namespace std;
void remove(char a[],char b){
    if (a[0]=='\0')
    {
        return;
    }
    if (a[0]!=b)
    {
        cout<<a[0];
    }
    remove(a+1,b);
}
int main(){
    char a[100],b;
    cin>>a>>b;
    remove(a,b);
}