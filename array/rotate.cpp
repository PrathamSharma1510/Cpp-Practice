#include <iostream>
using namespace std;
void rotate(int arr[],int x,int num){
    int ans[x];
    int a=0;
    char my[]={'@','%', '$',' #','^'};
    while (a<x)
    {
        ans[a]=arr[num];
        if(num==x-1){
            num=0;
        }
        else{
            num++;
        }
        a++;
    }
    for (int i = 0; i < x; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,num;
        cin>>x>>num;
        int arr[x];
        for (int j= 0; j < x; j++)
        {
            cin>>arr[j];
        }
        rotate(arr,x,num);
    }
    
	return 0;
}