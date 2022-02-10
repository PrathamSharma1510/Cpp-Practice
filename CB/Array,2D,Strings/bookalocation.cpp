#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool ispossible(int v[],int mid,int num, int m){
    int stud=1;
    int pages=0;
    for (int i = 0; i < num; i++)
    {
        if(pages+v[i]>mid){
            stud++;
            pages=v[i];
            if (stud>m)
            {
                return false;
            }
        }
        else{
            pages+=v[i];
        }
    }
    return true;
}
int sol(int v[],int sum,int num, int m){
    int start=v[num-1];
    int end=sum;
    int ans=INT_MAX;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(ispossible(v,mid,num,m)){
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
           start=mid+1;
        }
    }
    return ans;
}
int main() {
    int num,m;
    cin>>num>>m;
    int v[num];
    int sum=0;
    for (int i = 0; i < num; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    cout<<sol(v,sum,num,m)<<endl;
	return 0;
}