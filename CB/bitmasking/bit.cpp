#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i;
    cin>>i;
    int mask=1<<i;
    int bit=(num&mask);
    // cout<<bit;
    if (bit==0)
    {
        cout<<0;
    }
    else{
        cout<<1;
    }
    
    // if((1&num)==0){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }
}