#include<iostream>
#include<queue>
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
    Node* root =new Node(3);
   Node* a =new Node(9);
   Node* b =new Node(20);
   Node* c =new Node(15);
   Node* d =new Node(7);


   root->left_child=a;
   root->right_child=b;
   b->left_child=c;
   b->right_child=d;

   level_order_print(root);
    string st;
}
