#include<iostream>
#include<stack>
using namespace std;
int main(){
    int num;
    cin>>num;
    stack<int>s;
    while (num--)
    {
        int a;
        cin>>a;
        if(a==2){
            int d;
            cin>>d;
            s.push(d);
        }
        else if(a==1 and !s.empty()){
            s.pop();
        }
        else{
            cout<<"No Code";
            break;
        }
    }
}