#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(10,5);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    for (auto it= v.begin(); it!=v.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for (int a:v)
    {
        cout<<a;
    }
}