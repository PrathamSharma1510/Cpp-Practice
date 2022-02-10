#include <iostream>
#include "vector.h"
using namespace std;
int main(){
    Vector v;
    v.push_back(10);
    v.push_back(100);
    v.push_back(12);
    v.push_back(120);
    v.pop_back();
    v.push_back(122);
    v.push_back(10);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}