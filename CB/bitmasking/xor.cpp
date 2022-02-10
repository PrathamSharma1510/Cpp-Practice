#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int num = x^y;
    int msb=0;
    while(num!=0) {
        num=num>>1;
        msb++;
    }
    int result = 1;
    while(msb--) {
        result=result<<1;
    }
    cout<<result-1;

    return 0;
}

// int main () {
// 	int x,y;
// 	cin>>x>>y;
// 	int ma=0;
// 	for(int a=x;a<=y;a++){
// 		for(int b=a;b<=y;b++){
// 			int s=(a^b);
// 			ma=max(ma,s);
// 		}
// 	}
// 	cout<<ma;
// 	return 0;
// }