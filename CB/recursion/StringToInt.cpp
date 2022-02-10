#include<iostream>
using namespace std;
int Stringtoint(string num,int n){
    if(n==0){
        return 0;
    }
    int sm=Stringtoint(num,n-1);
    int ans=num[n-1]-'0';
    int a=sm*10+ans;
    return a;
}
int main(){
    string num;
    cin>>num;
    int n=num.size();
    cout<<Stringtoint(num,n);
}