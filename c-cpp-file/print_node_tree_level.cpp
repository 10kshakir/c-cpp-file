#include<iostream>
#include<queue>
using namespace std;
class TreeNode
{
public:
    int value;
    TreeNode * left_child;
    TreeNode * right_child;
    TreeNode(int value)
    {
        this->value = value;
        this->left_child = NULL;
        this->right_child = NULL;
    }
};
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
    while(!q.empty())
    {

        cout<<q.front()<<" ";
        q.pop();
    }

}


int main()
{
    TreeNode* root =new TreeNode(3);
   TreeNode* a =new TreeNode(9);
   TreeNode* b =new TreeNode(20);
   TreeNode* c =new TreeNode(15);
   TreeNode* d =new TreeNode(7);


   root->left_child=a;
   root->right_child=b;
   b->left_child=c;
   b->right_child=d;

   level_order_print(root);
    string st;
}
