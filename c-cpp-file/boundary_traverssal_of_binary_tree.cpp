#include<iostream>

using namespace std;
class TreeNode
{
public:
    int value;
    TreeNode* left_child;
    TreeNode* right_child;
    TreeNode(int n)
    {
        value =n;
        left_child=NULL;
        right_child =NULL;
    }
};

void print_leaf(TreeNode* root)
{
    if(root ==NULL)return;
    if(root->left_child==NULL&&root->right_child==NULL)
    {
        cout<<root->value<<" ";
    }
    print_leaf(root->left_child);
    print_leaf(root->right_child);
}

void print_left_side_of_tree(TreeNode* root)
{
    if(root ==NULL)return;
    if(root->left_child!=NULL)
    {
        cout<<root->value<<" ";
        print_left_side_of_tree(root->left_child);
    }
    else if(root->right_child!=NULL)
    {
        cout<<root->value<<" ";
        print_left_side_of_tree(root->right_child);
    }

}

void print_right_side_of_tree(TreeNode* root)
{
    if(root ==NULL)return;
    if(root->right_child!=NULL)
    {
       cout<<root->value<<" ";
        print_right_side_of_tree(root->right_child);
    }
    else if(root->left_child!=NULL)
    {
        cout<<root->value<<" ";
        print_right_side_of_tree(root->left_child);
    }


}

void print_boundary_of_tree(TreeNode* root)
{
    if(root ==NULL) return;
    cout<<root->value<<" ";

    print_left_side_of_tree(root->left_child);

    print_leaf(root->left_child);

    print_leaf(root->right_child);

    print_right_side_of_tree(root->right_child);

}

int main()
{
    TreeNode* root =new TreeNode(15);
    TreeNode* a =new TreeNode(11);
    TreeNode* b =new TreeNode(26);
    root->left_child=a;
    root->right_child=b;

    TreeNode* c =new TreeNode(8);
    TreeNode* d =new TreeNode(12);
    a->left_child=c;
    a->right_child=d;

    TreeNode* e =new TreeNode(20);
    TreeNode* f =new TreeNode(30);
    b->left_child=e;
    b->right_child=f;

    TreeNode* g =new TreeNode(6);
    TreeNode* h =new TreeNode(9);
    c->left_child=g;
    c->right_child=h;

    TreeNode* i =new TreeNode(14);
    TreeNode* j =new TreeNode(35);
    d->right_child=i;
    f->right_child=j;

    print_boundary_of_tree(root);

    return 0;
}

/*
9
0  1  2
1  3  4
2  5  6
3 -1 -1
4 -1 -1
5  7  8
6 -1 -1
7 -1 -1
8 -1 -1
*/
