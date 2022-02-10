#include <iostream>
#include <algorithm>
#include<queue>
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
node *Takeinput()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    node *leftnode = Takeinput();
    node *rightnode = Takeinput();

    root->left = leftnode;
    root->right = rightnode;

    return root;
}
void bfs(node*root){
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node* s=q.front();
        cout<<s->data<<" ";
        q.pop();
        if(s->left){
            q.push(s->left);
        }
        if(s->right){
            q.push(s->right);
        }
    }
}
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
void kthprint(node *root, int k,vector<int>&v)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        v.push_back(root->data);
        return;
    }
    kthprint(root->left, k - 1,v);
    kthprint(root->right, k - 1,v);
}
int length(node *root){
    if(root==NULL){
        return 0;
    }
    int x=length(root->left);
    int y=length(root->right);
    return x+y+1;
}
void sumReplacement(node *&root){
    if(root==NULL){
        return;
    }
    sumReplacement(root->left);
    sumReplacement(root->right);

    if(root->left!=NULL && root->right!=NULL){
        root->data += (root->left->data) + (root->right->data);
    }
    else if(root->left!=NULL && root->right==NULL){
        root->data += (root->left->data);
    }
    else if(root->left==NULL && root->right!=NULL){
        root->data += (root->right->data);
    }
}
int main()
{
    node *root = Takeinput();
    // printnode(root);
    sumReplacement(root);
    cout<<root->data-8;
}