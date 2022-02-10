#include <iostream>
using namespace std;
void permutation(string str,int in,int end){
    if (in==end)
    {
        cout<<str<<endl;
        return;
    }
    for (int i = in; i <= end; i++)
    {
        swap(str[i],str[in]);
        permutation(str,in+1,end);
        swap(str[i],str[in]);
    }
}
int main(){
    string str;
    cin>>str;
    int in=0;
    int end=str.length()-1;
    permutation(str,in,end);
}