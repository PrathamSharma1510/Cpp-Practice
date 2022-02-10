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
node *merge(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    node *newhead = NULL;
    if (a->data <= b->data)
    {
        newhead = a;
        newhead->next = merge(a->next, b);
    }
    else
    {
        newhead = b;
        newhead->next = merge(a, b->next);
    }
    return newhead;
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
    node *head2 = NULL;
    int num2;
    cin >> num2;
    for (int i = 0; i < num2; i++)
    {
        int a;
        cin >> a;
        pushback(head2, a);
    }
    node *b = merge(head, head2);
    print(b);
}