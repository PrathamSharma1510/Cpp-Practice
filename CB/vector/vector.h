#include <iostream>
using namespace std;
class Vector
{
    int siz;
    int cap;
    int *arr;

public:
Vector(){
    siz=0;
    cap=1;
    arr=new int[cap];
}
void push_back(int s){
    if(siz==cap){
        int *oldarr=arr;
        arr=new int[2*cap];
        cap=2*cap;
        for (int i = 0; i < siz; i++)
        {
            arr[i]=oldarr[i];
        }
        delete [] oldarr;
    }
    arr[siz]=s;
    siz++;
}
void pop_back(){
    siz--;
}
int capacity(){
    return cap;
}
int size(){
    return siz;
}
int operator[](int i){
    return arr[i];
}
};