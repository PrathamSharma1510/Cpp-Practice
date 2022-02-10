#include<iostream>
using namespace std;
void reverce(string a){
    if(a.size()==0){
        return;
    }
    reverce(a.substr(1));
    cout<<a[0];
}
int main(){
    string a;
    cin>>a;
    reverce(a);
}