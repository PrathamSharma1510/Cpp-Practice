#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool ans=true;
    bool point=false;
    bool point2=false;
    int start=0;
    int end=1;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[start]==arr[end])
        {
            ans=false;
            break;
        }
        else if (arr[start]>arr[end])
        {
            ans=false;
        }
        else if(arr[start]<arr[end]){
            ans=true;
        }
        // else if (arr[start]<arr[end])
        // {
            
        // }
        // else if (arr[start]<arr[end])
        // {
        //     point =true;
        // }
        // else if(arr[point] && arr[start]>arr[end]){
        //     ans=false;
        //     break;
        // }
        start ++;
        end ++;
    }
    if (ans==0)
    {
        cout<<"false";
    }
    else
    cout<<"true";
    
	return 0;
}