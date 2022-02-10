#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class stack
{
    vector<T> v;
public:
    void pushback(T data)
    {
        v.push_back(data);
    }
    void popback()
    {
        v.pop_back();
    }
    bool isempty()
    {
        return v.size() == 0;
    }
    T top()
    {
        return v[v.size() - 1];
    }
};
int main(){
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.pushback(i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<s.top()<<" ";
        s.popback();
    }
}