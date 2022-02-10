#include <iostream>
using namespace std;
void generateBrackets(int num,char a[],int open,int close,int idx){
    if(idx==(2*num)){
        a[idx]='\0';
        cout<<a<<endl;
        return;
    }
    if(open<num){
        a[idx]='(';
        generateBrackets(num,a,open+1,close,idx+1);
    }
    if(close<open){
        a[idx]=')';
        generateBrackets(num,a,open,close+1,idx+1);        
    }
}
int main(){
    int num;
    cin>>num;
    char ans[1000];
    generateBrackets(num,ans,0,0,0);
}