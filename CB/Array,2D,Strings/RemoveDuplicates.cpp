#include <iostream>
using namespace std;
void RemoveDuplicates(char a[]){
    int pre=0;
    for (int i = 1; a[i]!='\0'; i++)
    {
        if (a[pre]!=a[i])
        {
            pre++;
            a[pre]=a[i];
        }
    }
    a[pre+1]='\0';
}
int main(){
    char a[100];
    cin>>a;
    RemoveDuplicates(a);
    cout<<a;
}