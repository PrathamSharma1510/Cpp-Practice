#include <iostream>
#include <stack>
using namespace std;
class que
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int num)
    {
        s1.push(num);
    }
    int pop()
    {
        if (s1.empty() and s2.empty())
        {
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        s2.pop();
        return x;
    }
    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return 0;
    }
};
int main()
{
    int num;
    cin >> num;
    que q1;
    // q1.push(1);
    int s = 0;
    while (s < num)
    {
        q1.push(s);
        s++;
    }
    // cout<<q1.pop();
    while (!q1.empty())
    {
        cout<<q1.pop()<<" ";
    }
}