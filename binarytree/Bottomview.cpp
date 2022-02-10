#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void printnode(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";
    if (root->left != NULL)
    {
        cout << 'L' << root->left->data << " ";
    }
    if (root->right != NULL)
    {
        cout << 'R' << root->right->data;
    }
    cout << endl;
    printnode(root->left);
    printnode(root->right);
}
node *takeinput(node *head)
{
    int num;
    cin >> num;
    
    if (num == -1)
    {
        return NULL;
    }
    else
    {
        head = new node(num);
        head->left=takeinput(head->left);
        head->right=takeinput(head->right);

        return head;
    }
}

int main()
{
    node *head = NULL;
    printnode(takeinput(head));
}