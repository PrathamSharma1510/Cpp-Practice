#include <iostream>
using namespace std;
int lastOccur(int arr[],int key,int end,int num){
    if(num==0){
        return -1;
    }
    if(arr[end]==key){
        return end;
    }
    return lastOccur(arr,key,end-1,num-1);
}
int firstOccur(int arr[],int key,int s,int num){
    if(num==0){
        return -1;
    }
    if(arr[s]==key){
        return s;
    }
    return firstOccur(arr,key,s+1,num-1);
}
void alloccu(int arr[],int key,int s,int num){
    if(num==0){
        return;
    }
    if(arr[s]==key){
        cout<<s<<" ";
    }
    alloccu(arr,key,s+1,num-1);
}
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int s=0;
    int end=num-1;
    cout<<firstOccur(arr,key,s,num)<<endl;
    cout<<lastOccur(arr,key,end,num)<<endl;
    alloccu(arr,key,s,num);
}