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
void space_print(int level)
{
    for(int i =0;i<level;i++)
    {
        cout<<"  ";
    }
}
void print_tree(Node* root,int level)
{
    if(root == NULL) return;

    if(root->left_child == NULL && root->right_child == NULL)
    {
        cout<<root->value<<endl;
        return;
    }else{
        cout<<endl;
        space_print(level);
        cout<<" root : "<<root->value<<endl;
    }

    if(root->left_child!=NULL)
    {
        space_print(level);
        cout<<" left : ";
        print_tree(root->left_child,level+1);
    }

    if(root->right_child!=NULL)
    {
        space_print(level);
        cout<<" right : ";
        print_tree(root->right_child,level+1);
    }
}
void print_leat_node(Node* root)
{
    if(root==NULL)return;
    if(root->left_child==NULL&&root->right_child==NULL)
    {
        cout<<root->value<<endl;
        return;
    }
    print_leat_node(root->left_child);
    print_leat_node(root->right_child);
}
int main()
{
   Node* root =new Node(1);
   Node* a =new Node(2);
   Node* b =new Node(3);
   Node* c =new Node(8);
   Node* d =new Node(5);
//   Node* e =new Node(6);
//   Node* f =new Node(7);

   root->left_child=a;
   root->right_child=b;
   b->left_child=c;
   b->right_child=d;
//   b->left_child=e;
//   b->right_child=f;
//   print_tree(root,0);
   print_leat_node(root);

    return 0;
}


