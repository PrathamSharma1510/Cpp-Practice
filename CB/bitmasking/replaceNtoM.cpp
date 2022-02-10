#include <iostream>
using namespace std;
int clearrange(int num,int i,int j){
    int ons=(~0);
    int first_p=ons<<(j+1);
    int second_p=(1<<i)-1;
    int mask=first_p|second_p;
    int ans=num&mask;
    return ans;
}
int main(){
    int num,m;
    cin>>num>>m;
    int i,j;
    cin>>i>>j;
    int clearnum=clearrange(num,i,j);
    int ans=(clearnum|(m<<i));
    cout<<ans;
}