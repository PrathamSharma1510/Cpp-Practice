#include<iostream>

using namespace std;

int main() {
    int a,b=0,c=0;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (b<arr[i])
        {
            b=arr[i];
        } 
    }
    cout<<b;
    for (int i = 0; i < a; i++)
    {
        if (c<arr[i])
        {
            if(c==b){
                continue;
            }
            else{
            c=arr[i];
            }
        }
    }
    cout<<c<<endl;
    
}