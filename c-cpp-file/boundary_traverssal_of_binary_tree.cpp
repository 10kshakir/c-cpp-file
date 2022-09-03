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
    int n;
    cin>>n;
    TreeNode *allnodes[n];
    for(int i =0;i<n;i++)
    {
        allnodes[i]=new TreeNode(-1);
    }
    for(int i =0;i<n;i++)
    {
        int root,left,right;
        cin>>root>>left>>right;

        allnodes[i]->value=root;
        if(left>n-1||right>n-1)
        {
            cout<<"invalid index";
           continue;
        }
        if(left!=-1)
        {

            allnodes[i]->left_child=allnodes[left];
        }
        if(right!=-1)
        {

            allnodes[i]->right_child=allnodes[right];
        }
    }
    print_boundary_of_tree(allnodes[0]);

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
