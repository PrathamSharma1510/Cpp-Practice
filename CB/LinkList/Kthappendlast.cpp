#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node* kthelefomend(node *head,int k){
    node *first=head;
    node *second=head;
    while(k--){
        second=second->next;
    }
    while(second->next!=NULL){
        second=second->next;
        first=first->next;
    }
    return first;
}
void pushback(node *&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node *tail=head;
    while (tail->next!=NULL)
    {
        tail=tail->next;
    }
    node *n=new node(d);
    tail->next=n;
}
void print(node *head){
    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *ans(node *head,int num){
    if(num==0){
        return head;
    }
    node *s=kthelefomend(head,num);
    node *store=s->next;
    s->next=NULL;
    node *temp=store;
    while(store->next!=NULL){
        store=store->next;
    }
    node *h=head;
    store->next=head;
    h=temp;
    return h;
}
int main(){
    node *head=NULL;
    long long int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        pushback(head,a);
    }
    long long int num;
    cin>>num;
    while (num>=n)
    {
        num=num-n;
    }
    node *an= ans(head,num);
    print(an);
}