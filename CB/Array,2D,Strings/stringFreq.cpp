#include<iostream>
using namespace std;
int main() {
    char s[1000];
    cin>>s;
    int arr[25]={0};
    for (int i = 0;s[i]!='\0'; i++)
    {
        int x=s[i]-'a';
        arr[x]++;
    }
    int max1=0;
    for (int i = 0; i <=25; i++)
    {
        max1=max(max1,arr[i]);
    }
    int an=0;
    for (int i = 0; i <=25; i++)
    {
        if(arr[i]==max1){
            an=i;
            break;
        }
    }
    int s2=(an+'a');
    cout<<char(s2);
	return 0;
}