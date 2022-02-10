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
node *takeInput(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string a;
        cin >> a;
        if (a == "true")
        {
            root->left = takeInput(a);
        }
        string b;
        cin >> b;
        if (b == "true")
        {
            root->right = takeInput(b);
        }
        return root;
    }
    return NULL;
}
bool ans(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if(root1 !=NULL && root2!=NULL){
        bool a=ans(root1->left,root2->left);
        bool v=ans(root1->right,root2->right);

        return(a&&v);
    }
    return false;
}
int main()
{
    node *root1 = takeInput("true");
    node *root2 = takeInput("true");
    if(ans(root1, root2)==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}