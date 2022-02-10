#include <iostream>

class node
{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
node* arrange_LinkedList(node* head)
{
   
    
    if(head==NULL || head->next ==NULL)
        return head ;
    
	node* oddh =NULL ;
    node* evenh = NULL ;
    node* oddt = NULL ;
    node* event = NULL ;
    
    while(head!=NULL)
    {
        //even
        if(head->data %2 == 0)
        {
            if(evenh == NULL)
            {
                evenh =head ;
                event = head ;
                head=head->next ;
            }
            else
            {
                event->next = head ;
                event =head ;
                head=head->next ;
            }
        }
        else
        {
            //odd 
             if(oddh == NULL)
            {
                oddh =head ;
                oddt = head ;
                head=head->next ;
            }
            else
            {
                oddt->next = head ;
                oddt = head ;
                head=head->next ;
            }
        }
        
    }
    if(event!=NULL)
    {
        event->next = NULL;
    	
    }
    else
    {
        oddt->next =NULL ;
        return oddh ;
    }
    if(oddt!=NULL)
    {
        oddt->next =evenh ;
        return oddh;
    }
    else
    {
        return evenh ;
    }
    
}


node *takeinput()
{
	int data;
	cin >> data;
	node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		node *newnode = new node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		node *head = takeinput();
		head = arrange_LinkedList(head);
		print(head);
	}
	return 0;
}