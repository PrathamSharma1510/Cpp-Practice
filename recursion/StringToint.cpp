#include <iostream>
using namespace std;
int stringToInt(string str,int n){
    if (n==0)
    {
        return 0;
    }
    int smallans=stringToInt(str,n-1);
    int last=str[n-1] - '0';
    int ans=(smallans*10)+last;
    return ans;
}
int main(){
    string str;
    cin>>str;
    int n=str.length();
    int a=stringToInt(str,n);
    cout<<a;
}