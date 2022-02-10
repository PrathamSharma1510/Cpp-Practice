#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void primefactor(vector<int>v,int n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            while (n%i==0)
            {
                v.push_back(i);
                n=n/i;
            }
        }
    }
    if(n!=0){
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    primefactor(v,n);
}