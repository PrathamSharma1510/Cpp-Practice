#include<iostream>
#include<stack>
using namespace std;
 bool isValid(string s) {
        stack<char> q;
        int i=0;
        while(i!=s.length()){
            if(s[i]=='{' || s[i]=='[' || s[i]=='(' ){
                q.push(s[i]);
            }
            else if(s[i]=='}' && !q.empty()){
                if(q.top()=='{'){
                    q.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                 if(q.top()=='[' && !q.empty()){
                    q.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==')' && !q.empty()){
                 if(q.top()=='('){
                    q.pop();
                }
                else{
                    return false;
                }
            }
            i++;
        }
       return q.empty();
    }

int main(){
    string a;
    cin>>a;
    a.size();
    cout<<isValid(a);
}