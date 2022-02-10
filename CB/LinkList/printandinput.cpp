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
int length(node *head)
{
    int x = 1;
    while (head->next != NULL)
    {
        head = head->next;
        x++;
    }
    return x;
}
void insertattail(node *&head, int d)
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
void insertInmiddle(node *&head,int d,int p){
    if(head==NULL){
        head=new node(d);
        return;
    }
    else if(p==0){
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
    else if(p>length(head)){
        insertattail(head,d);
    }
    else{
        int j=1;
        node *modifi=head;
        while(j<p){
            modifi=modifi->next;
            j++;
        }
        node *n=new node(d);
        node *temp=modifi->next;
        modifi->next=n;
        n->next=temp;
    }
}
void insertathead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void deletefromhead(node *&head){
    if(head==NULL){
        return;
    }
    node *temp=head->next;
    delete head;
    head=temp;
}
void reverse(node *&head){
    node *s=NULL;
    node *n=head;
    node *a;
    while(n!=NULL){
        a=n->next;
        n->next=s;

        s=n;
        n=a;
    }
    head=s;
}
node* reverserec(node *head){
    if(head->next==NULL || head==NULL){
        return head;
    }
    node *shead=reverserec(head->next);

    node *temp=head->next;
    temp->next=head;
    head->next=NULL;
    return shead;
}
int main()
{
    node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        insertattail(head, i);
    }
    print(head);
    node *s=reverserec(head);
    cout<<endl;
    print(s);
    // cout << endl;
    // cout << length(head);
    // cout << endl;
    // insertInmiddle(head,94,0);
    // print(head);
    // cout << endl;
    // cout << length(head);
    // deletefromhead(head);
    // cout<<endl;
    // print(head);
}