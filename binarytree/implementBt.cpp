#include <iostream>
#include <algorithm>
#include <vector>
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
int length(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(length(root->left), length(root->right)) + 1;
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
int main()
{
    node *root = Takeinput();
    printnode(root);
    // int l = length(root);
    // vector<vector<int> >ans;
    // for (int i = 1; i <= l; i++)
    // {
    //     vector<int>v;
    //     kthprint(root,i,v);
    //     ans.push_back(v);
    //     cout<<endl;
    // }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }cout<<endl;
    // }
}