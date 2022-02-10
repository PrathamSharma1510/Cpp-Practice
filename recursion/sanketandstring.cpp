#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    char s[1000];
    cin>>s;
    int a=0;
    int b=0;
    int size=0;
    for (int i = 0;s[i]!='\0'; i++)
    {
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
        size++;
    }
    // cout<<a<<" "<<b;
    int ans=max(a,b);
    if(ans+num<=size){
        cout<<ans+num;
    }
    else{
        cout<<size;
    }
	return 0;
}