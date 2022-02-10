#include <iostream>
using namespace std;
bool present(int arr[],int s,int x){
    if (s==0)
    {
        return false;
    }
    if (arr[0]==x)
    {
        return true;
    }
    return present(arr+1,s-1,x);
}
int main(){
    int x;
    cin>>x;
    int arr[]={1,2,3,4,5}; 
    int s=5;
    int ans=present(arr,s,x);
    if(ans==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}