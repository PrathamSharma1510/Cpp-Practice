#include <iostream>
using namespace std;
void printSub(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    printSub(s.substr(1),ans);
    printSub(s.substr(1),ans+s[0]);
}
int main(){
    string s;
    cin>>s;
    string ans="";
    printSub(s,ans);
}