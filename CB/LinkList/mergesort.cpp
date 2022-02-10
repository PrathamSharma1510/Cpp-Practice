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
node *sortList(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    /// break list into two
    node *slow = head;
    node *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *n = slow->next;
    slow->next = NULL;
    node *a = sortList(head);
    node *b = sortList(n);
    head = merge(a, b);
    return head;
}
// node* mergesort(node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     node *first = head;
//     node *second = head->next;
//     while (second && second->next)
//     {
//         first = first->next;
//         second = second->next->next;
//     }
//     // node *b = first->next;
//     // first->next = NULL;
//     // cout<<first->data;
//     // mergesort(a);
//     // mergesort(b);
//     // a = merge(a, b);
// }
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
    node *x=sortList(head);
    print(x);
}