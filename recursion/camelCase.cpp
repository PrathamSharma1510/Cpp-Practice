#include<iostream> 
using namespace std;
int main() {
    // cout<<'Z'-'a';
    string s;
    cin>>s;
    for (int i = 0;i<s.size(); i++)
    {
        int a=s[i+1]-'a';
        if(a<0){
            cout<<s[i];
            cout<<endl;
        }
        else{
            cout<<s[i];
        }
    }
	return 0;
}