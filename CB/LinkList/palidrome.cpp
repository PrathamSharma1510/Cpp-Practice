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
void reverse(node *&head, node *s)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *temp = head;
    // node *b = NULL;
    node *a;
    while (temp != NULL)
    {
        a=temp->next;
        temp->next = s;

        s=temp;
        temp=a;
    }
    head=s;
}
// bool poli(node *head){

// }
bool poli(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *a = head;
    node *b = slow->next;
    reverse(b,NULL);
    slow->next=b;
    while(b!=NULL){
        if(a->data != b->data){
            return 0;
        }
        a=a->next;
        b=b->next;
    }
    return true;
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
    bool ans=poli(head);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}