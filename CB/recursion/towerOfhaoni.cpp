#include <iostream>
using namespace std;
void move(int num,char a,char b,char c){
    if(num==0){
        return;
    }
    move(num-1,a,c,b);
    cout<<"Shift disk "<<num<<" from "<<a<<" "<<c<<endl;
    move(num-1,b,a,c);
}
int main(){
    int num;
    cin>>num;
    move(num,'A','B','C');
}