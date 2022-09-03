#include<iostream>
using namespace std;
class Node
{
public:
    int value;
    Node * left_child;
    Node * right_child;
    Node(int value)
    {
        this->value = value;
        this->left_child = NULL;
        this->right_child = NULL;
    }
};


bool is_unival(Node* root)
{
    if(root==NULL) return true;

    if(root->left_child!=NULL)
    {
        if(root->value!=root->left_child->value) return false;

    }

    if(root->right_child!=NULL)
    {
        if(root->value!=root->right_child->value)return false;

    }
    return is_unival(root->left_child)&&is_unival(root->right_child);
}
int main()
{
    Node *root =new Node(2);
    Node *a =new Node(2);
    Node *b =new Node(2);
    Node *c =new Node(2);
    Node *d =new Node(2);
    Node *e =new Node(2);
    Node *f =new Node(2);

    root->left_child =a;
    root->right_child =b;
    a->left_child =c;
    a->right_child=d;

    b->left_child= e;
    b->right_child=f;

    bool t = is_unival(root);
   if(t)
   {
       cout<<"it's a uni-value tree";

   }
   else{ cout<<"it's not an uni-value  tree";}


    return 0;
}
