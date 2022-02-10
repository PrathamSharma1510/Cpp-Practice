#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void pushback(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    node *n = new node(d);
    tail->next = n;
}
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void ans(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *ans = head;
    node *even = NULL;
    node *odd = NULL;
    node *a;
    node *b;
    bool g = false;
    bool s=false;
    while (ans != NULL)
    {
        if (ans->data % 2 != 0)
        {
            g = true;
            if (even == NULL)
            {
                even = new node(ans->data);
                a = even;
            }
            else
            {
                node *a = new node(ans->data);
                even->next = a;
                even = a;
            }
        }
        else
        {
            if (odd == NULL)
            {
                s=true;
                odd = new node(ans->data);
                b = odd;
            }
            else
            {
                node *s = new node(ans->data);
                odd->next = s;
                odd = s;
            }
        }
        ans = ans->next;
    }
    if (g == true && s==true)
    {
        even->next = b;
        head = a;
    }
    else if(g==true)
    {
        head = a;
    }
    else{
        head=b;
    }
}
int main()
{
    node *head = NULL;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int a;
        cin >> a;
        pushback(head, a);
    }
    ans(head);
    print(head);
}