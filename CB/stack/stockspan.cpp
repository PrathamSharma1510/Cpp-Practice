#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> span(int arr[],int num){
    vector<int> v;
    stack<pair<int,int> >s;
    int i=0;
    while(i<num){
        int day=1;
        while (!s.empty() and s.top().first<arr[i])
        {
            day+=s.top().second;
            s.pop();
        }
        s.push(make_pair(arr[i],day));
        v.push_back(day);
        i++; 
    }
    return v;
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    vector<int> ans=span(arr,num);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"END";
}