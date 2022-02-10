#include <iostream>
#include<vector>
using namespace std;
void printSubSe(string str,string output){
    if (str.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    printSubSe(str.substr(1),output);
    printSubSe(str.substr(1),output+str[0]);
}
void Store(string str,string output,vector<string>&v){
    if (str.length()==0)
    {
        v.push_back(output);
        return;
    }
    Store(str.substr(1),output,v);
    Store(str.substr(1),output+str[0],v);
}
int main(){
    string str,output;
    cin>>str;
    output="";
    vector<string> v;
    // printSubSe(str,output);
    Store(str,output,v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}