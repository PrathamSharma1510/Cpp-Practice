#include <iostream>
using namespace std;
int countZero(int x){
    if (x==0)
    {
        return 0;
    }
    int y=countZero(x/10);
    if (x%10==0)
    {
        y++;
    }
    return y;
}
int main(){
    int x;
    cin>>x;
    cout<<countZero(x);
}