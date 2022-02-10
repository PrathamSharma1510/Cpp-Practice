#include<iostream>
#include<list>
using namespace std;
int main() {
	int num;
	cin>>num;
	list<int>l;
	for(int i=0;i<num;i++){
        int n;
        cin>>n;
		l.push_back(n);
	}
    l.sort();
    for(auto a:l){
        cout<<a<<" ";
    }
	return 0;
}