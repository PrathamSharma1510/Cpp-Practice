#include<iostream>
using namespace std;
int main() {
    char a;
    cin>>a;
    int b= a-'a';
    if(b<=(-7) && b>=(-32)){
        cout<<'U';
    }
    else if(b>=0 && b<=25){
        cout<<"L";
    }
    else{
        cout<<"I";
    }
	return 0;
}