
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
bool checkcycle(node *head)
{
    node *slow = head;
    node *fast = head;
    bool tr=false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            tr=true;
            break;
        }
    }
    if(tr){
        slow=head;
        while(fast!=slow){
            node *s=fast;
            fast=fast->next;
        }
        s->next=NULL;
        return 1;
    }
    else{
        return 0;
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
    if(!checkcycle(head)){cout<<'0';}
}