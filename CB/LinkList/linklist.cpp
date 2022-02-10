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
void insertAthear(node *&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node *n=new node(d);
    n->next=head;
    head=n;
}
void print (node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node *head=NULL;
    insertAthear(head,2);
    insertAthear(head,5);
    insertAthear(head,21);
    insertAthear(head,10);
    insertAthear(head,23);
    print(head);
}