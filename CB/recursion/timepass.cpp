#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    while(num--){
        int ma=0;
        int a,b,c;
        cin>>a>>b>>c;
        cout<<a+b+c-(min(a,min(b,c)))<<endl;
    }
	return 0;
}
