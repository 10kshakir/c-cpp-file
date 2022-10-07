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
int find_Max(TreeNode* root)
{
    if(root ==NULL)
        return -1;
    else if(root->right_child==NULL)
    {
        return root->value;
    }
    return find_Max(root->right_child);
}
TreeNode* insertion_BST(TreeNode* root,int val)
{
    TreeNode* new_node =new TreeNode(val);
    if(root == NULL)
    {

        root = new_node;
        return root;
    }
    //val < root->val
    if(val<root->value)
    {
        root->left_child=insertion_BST(root->left_child,val);

    }

    //val > root->val
    else if(val>root->value)
    {
        root->right_child=insertion_BST(root->right_child,val);
    }

    return root;
}
void in_order(TreeNode* root)
{
    if(root ==NULL)return;
    in_order(root->left_child);
    cout<<root->value<<" ";
    in_order(root->right_child);
}

TreeNode* search_BST(TreeNode* root,int val)
{

    if(root == NULL)return NULL;

    if(root->value == val)
    {
        cout<<root->value;
        return root;
    }

    else if(val<root->value)
    {
        cout<<root->value<<" -> ";
        return search_BST(root->left_child,val);
    }

    else
    {
        cout<<root->value<<" -> ";
        return  search_BST(root->right_child,val);
    }
}

TreeNode* inorder_successor(TreeNode* root)
{
    TreeNode* curr =root;
    while( curr->left_child!=NULL)
    {
        curr=curr->left_child;
    }
    return curr;
}


TreeNode* deletion_BST(TreeNode* root,int val)
{

    if(val < root->value)
    {
        root->left_child= deletion_BST(root->left_child,val);
    }else if(val > root->value)
    {
      root->right_child= deletion_BST(root->right_child,val);
    }
    else
    {
        if(root->left_child==NULL)
        {
            TreeNode* temp =root->right_child;
            free(root);
            return temp;

        }
        else if(root->right_child==NULL)
        {
            TreeNode* temp =root->left_child;
            free(root);
            return temp;
        }else
        {
            TreeNode* temp =inorder_successor(root->right_child);
            root->value=temp->value;
             root->right_child=deletion_BST(root->right_child,temp->value);


        }
        return root;

    }
return root;

}
void level_order_print(TreeNode* root)
{
    if(root == NULL) return;
    queue <TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode* node =q.front();
        q.pop();
        if(node!=NULL)
        {
            cout<<node->value<<" ";
            if(node->left_child!=NULL)
            {
                q.push(node->left_child);
            }
            if(node->right_child!=NULL)
            {
                q.push(node->right_child);
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);
                cout<<endl;
            }
        }
    }


}
int main()
{
    int n;
    cin>>n;
    TreeNode* root =NULL;
    for(int i =0;i<n;i++)
    {
        int val;
        cin>>val;
        root =insertion_BST(root,val);
    }
   in_order(root);
   cout<<endl;
    level_order_print(root);
    cout<<endl;

}
/*
9
11 5 9 43 34 1 2 7 21
*/
