#include <iostream>
#include <math.h>
using namespace std;
float Gsum(int x){
    if (x==0)
    {
        return 1;
    }
    float ans=Gsum(x-1);
    float a=1/(pow(2,x));
    return a+ans;
}
int main(){
    int x;
    cin>>x;
    cout<<Gsum(x);
}