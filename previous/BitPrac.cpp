#include<iostream>
using namespace std;
void unique(int arr[],int n){
    int uniq=0;
    for (int i = 0; i < n; i++)
    {
        uniq=uniq^arr[i];
    }
    int s=uniq;
    int setBit=0;
    int pos=0;
    while(setBit!=1){
        setBit=uniq&1;
        pos++;
        uniq=uniq>>1;
    }
    pos=pos-1;
    int uni=0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]&1<<pos)!=0)
        {
            uni=uni^arr[i];
        }
        
    }
    cout<<uni<<endl;
    cout<<(uni^s);
}
int main(){
    int arr[]={1,2,3,4,1,2,3,5};
    unique(arr,8);
}