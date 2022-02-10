#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int num;
    cin>>num;
    string arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+num);
    for (int i = 1; i < num; i++)
    {
        if(arr[i-1].length()<arr[i].length()){
            int x=arr[i].find(arr[i-1]);
            if(x==0){
                swap(arr[i-1],arr[i]);
            }
        // }
        // else{
        //     int x=arr[i-1].find(arr[i]);
        //     if(x==0){
        //         swap(arr[i-1],arr[i]);
        //     }
        }
    }
      for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}