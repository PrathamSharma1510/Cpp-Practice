#include<iostream>
using namespace std;
void cyclicsort(int arr[],int num){
    int i=0;
    while(i<num){
        int j=arr[i]-1;
        if(arr[j]!=arr[i]){
            swap(arr[i],arr[j]);
        }
        else{
            i++;
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    cyclicsort(arr,num);
}