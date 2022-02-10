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
void reverse(node *&head)
{
    if (head->next == NULL || head == NULL)
    {
        return;
    }
    node *temp=head;
    node *s=NULL;
    node *a;
    while(temp!=NULL){
        a=temp->next;
        temp->next=s;

        s=temp;
        temp=a;
    }
    head=s;
}
void pushback(node *&head,long long int d)
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
node* ans(node *head,int left,int k){
    node *temp=head;
    int s=left;
    //reaching left digit.
    s--;
    node *aus;
    while(s--){
        aus=temp;
        temp=temp->next;
    }
    node *l=temp;
    node *le=temp;
    int d=(k-left);
    //reaching right digit
    while(d--){
        temp=temp->next;
    }
    node *r=temp->next;
    temp->next=NULL;
    reverse(l);
    aus->next=l;
    le->next=r;
    return head;
}
int main()
{
    node *head = NULL;
    long long int num, k,left;
    cin >> num >>left>> k;
    for (long long int i = 0; i < num; i++)
    {
        long long int a;
        cin >> a;
        pushback(head, a);
    }
    node *x=ans(head,left,k);
    print(x);
}