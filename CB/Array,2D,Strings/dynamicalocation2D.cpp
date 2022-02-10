#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int *p=new int[x];
    cout<<p<<endl;
    for (int i = 0; i < x; i++)
    {
        cin>>p[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout<<p[i];
    }
    delete []p;
    p=NULL;
    // int r,c;
    // cin>>r>>c;
    // int **p=new int*[r];
    // for (int i = 0; i < r; i++)
    // {
    //     p[i]=new int[c];
    // }
    // int val=1;
    // for (int i = 0; i < r; i++){
    //     for (int j= 0; j< c; j++)
    //     {
    //         p[i][j]=val;
    //         cout<<p[i][j];
    //         val++;
    //     }cout<<endl;
    // }
    
}