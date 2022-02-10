#include<iostream>
using namespace std;
bool pelidrome(int arr[],int num,int i,int start){
    if(start>=num-i-1){
        return true;
    }
    if(arr[start]!=arr[num-i-1]){
        return false;
    }
    return pelidrome(arr,num,i+1,start+1);
}
int main() {
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int start=0;
    // cout<<pelidrome(arr,num,i,start);
    if(pelidrome(arr,num,i,start)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
	return 0;
}