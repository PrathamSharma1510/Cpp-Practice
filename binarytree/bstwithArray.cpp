#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *makebst(int i, int end, int arr[])
{
    if (i > end)
    {
        return NULL;
    }
    int mid = (i + end) / 2;
    node *root = new node(arr[mid]);
    root->left = makebst(i, mid - 1, arr);
    root->right = makebst(mid + 1, end, arr);

    return root;
}
void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
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
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int start = 0;
        int end = a-1;
        node *root = makebst(start, end, arr);
        print(root);
        cout<<endl;
    }
}