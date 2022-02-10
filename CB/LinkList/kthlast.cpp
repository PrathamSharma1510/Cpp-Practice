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
node *kthelefomend(node *head, int k)
{
    node *first = head;
    node *second = head;
    while (k--)
    {
        second = second->next;
    }
    while (second != NULL)
    {
        second = second->next;
        first = first->next;
    }
    return first;
}
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
node *push(node *head)
{
    int a;
    cin >> a;
    while (a != -1)
    {
        pushback(head, a);
        cin >> a;
    }
    return head;
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
int main()
{
    node *head = NULL;
    head = push(head);
    long long int num;
    cin >> num;
    node *ans = kthelefomend(head, num);
    cout << ans->data;
}