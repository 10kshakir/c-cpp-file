#include<iostream>
#include<queue>
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

void in_order(TreeNode* root,string &st)
{
    if(root ==NULL)return;
    in_order(root->left_child,st);
    st+=to_string(root->value);
    st+=" ";
    in_order(root->right_child,st);
}

void post_order(TreeNode* root,string &st)
{
    if(root ==NULL)return;
    post_order(root->left_child,st);

    post_order(root->right_child,st);
    st+=to_string(root->value);
    st+=" ";
}
void pre_order(TreeNode* root,string &st)
{
    if(root ==NULL)return;
    st+=to_string(root->value);
    st+=" ";
    pre_order(root->left_child,st);

    pre_order(root->right_child,st);
}

void space_print(int level)
{
    for(int i =0;i<level;i++)
    {
        cout<<"  ";
    }
}

int sumOfLeftLeaves(treeNode* root)
{
    if(root)
    {
        if(root->left && !root->left->left && !root->left->right)
        {
            return root->left->value + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        }
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
    return 0;
}
void print_tree(TreeNode* root,int level)
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

int search_inOrder(int inorder[],int current ,int start,int ending)
{
    for(int i =start;i<=ending;i++)
    {
        if(inorder[i]==current)
        {
            return i;
        }
    }
    return -1;
}

TreeNode *built_tree_from_pre_in(int preOrder[],int inOrder[],int start,int ending)
{
   static int id =0;

   int current  = preOrder[id];
   id++;
   TreeNode* root = new TreeNode(current);
   if(start==ending)
   {
       return root ;
   }
    int pos = search_inOrder(inOrder,current,start,ending );
    root->left_child=built_tree_from_pre_in(preOrder,inOrder,start,pos-1 );
    root->right_child=built_tree_from_pre_in(preOrder,inOrder,pos+1,ending );

    return root;
}





/*
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6

*/
int main()
{
    int n;
    cin>>n;
    int inOrder[n];
    int preOrder[n];
    for(int i =0;i<n;i++)cin>>preOrder[i];

    for(int i =0;i<n;i++)cin>>inOrder[i];


    TreeNode *root =built_tree_from_pre_in(preOrder,inOrder,0,n-1);

    string st="";
    pre_order(root,st);
    cout<<endl<<st<<endl;
    print_tree(root,0);
    return 0;

}
