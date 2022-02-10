#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int num;
    cin>>num;
    long long int demo=num;
    vector<int>vs;
    while (demo!=0)
    {
        int x=demo%10;
        if (x>=5)
        {
            x=9-x;
            vs.push_back(x);
        }
        else{
            vs.push_back(x);
        }
        demo=demo/10;
    }
    reverse(vs.begin(),vs.end());
    for (int i =0; i<vs.size(); i++)
    {
        if (vs[0]==0)
        {
            vs[0]=9;
        }
        cout<<vs[i];
    }
    
}