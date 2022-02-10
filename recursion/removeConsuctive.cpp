#include <iostream>
using namespace std;
void removeCon(char a[]){
   if (a[0]=='\0')
   {
       return;
   }
   if (a[0]==a[1])
   {
       for (int i = 0; a[i]!='\0'; i++)
       {
           a[i]=a[i+1];
        }
        removeCon(a);
    }
    else{
        removeCon(a+1);
    }
}
int main(){
    char a[100];
    cin>>a;
    removeCon(a);
    cout<<a;
}