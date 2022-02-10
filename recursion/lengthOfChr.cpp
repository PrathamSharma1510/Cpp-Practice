#include <iostream>
using namespace std;
int length(char arr[],int x){
    if (arr[x]=='\0')
    {
        return 0;
    }
    int sum=length(arr+1,x);
    return 1+sum;

}
int main(){
    char arr[] ="wwabcd";
    int x=0;
    cout<<length(arr,x);
}