#include <iostream>
using namespace std;
void chock(int arr[],int num){
    int sum=0;
    if(num<=2){
        cout<<0<<endl;
    }
    else if(num>2){
        for(int i=0;i<num;i++){
        sum+=arr[i];}   
      if(sum==0){
        cout<<0<<endl;
      }
       else if(sum==1){
         cout<<num-2<<endl;     
      }
      else if(sum<num && sum!=0)
        cout<<0<<endl;     
    }
}
int main(){
    int a;
    cin>>a;
    for(int j=0;j<a;j++){
        int num;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        chock(arr,num);
    }
}