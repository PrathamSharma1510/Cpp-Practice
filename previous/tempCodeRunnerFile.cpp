#include<iostream>
#include<algorithm>
using namespace std;
void sortarr(int arrVW[],int arrV[],int arrW[],int a){
    int i, j, min_idx; 
    for (i = 0; i < a-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < a; j++) 
        if (arrVW[j] > arrVW[min_idx]) 
            min_idx = j; 

        swap(arrVW[min_idx],arrVW[i]); 
        swap(arrV[min_idx],arrV[i]);
        swap(arrW[min_idx],arrW[i]);
    } 
    
}
void max_profit(int arrV[],int arrW[],int totalW,int a){
    int sum=0;
    int arrVW[a];
    for (int i = 0; i < a; i++)
    {
        arrVW[i]=arrV[i]/arrW[i];
    }
    sortarr(arrVW,arrV,arrW,a);
    int x=0;
    int t=totalW;
    int farr[a];
    while (sum!=totalW)
    {
        if (t>arrW[x])
        {
            farr[x]=arrW[x];
            sum=+arrW[x];
            t=-arrW[x];
        }
        else if(arrW[x]>t){
            int s=arrW[x]-t;
            sum=+s;
            t=-s;
        }
        x++;
    }
    int ans=0;
    for (int i = 0; i < a; i++)
    {
        ans=+(farr[i]*arrVW[i]);
    }
    cout<<ans;
}
int main(){
    int a;
    cin>>a;
    int arrV[a];
    int arrW[a];
    int totalW;
    for (int i = 0; i < a; i++)
    {
        cin>>arrV[i];
        cin>>arrW[i];
    }
    cin>>totalW;
    max_profit(arrV,arrW,totalW,a);
}