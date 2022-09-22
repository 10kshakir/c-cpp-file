#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>

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

void zigzag_order(TreeNode* root)
{
    if(root == NULL) return;
    int count = 0;
    queue <TreeNode*> q;
    queue <TreeNode*>q1;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode* node =q.front();
        q.pop();
        if(node!=NULL)
        {
            if(count%2==0)
            {   q1.push(node);
                if(node->right_child!=NULL)
                {
                    q.push(node->right_child);
                }
                if(node->left_child!=NULL)
                {
                    q.push(node->left_child);
                }
            }else{
                q1.push(node);

                if(node->left_child!=NULL)
                {
                    q.push(node->left_child);
                }

                if(node->right_child!=NULL)
                {
                    q.push(node->right_child);
                }
            }



        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);
                count++;

            }
        }
    }
    while(!q1.empty())
    {
       TreeNode* d =q1.front();
        cout<<d->value<<" ";
        q1.pop();
    }
}

void zigzag(TreeNode* root)
{
    if (!root) return;
    stack<TreeNode*> current;
    stack<TreeNode*> next;
    current.push(root);
    bool lefttoright = true;
    while (!current.empty()) {
        TreeNode* temp = current.top();
        current.pop();
        if (temp) {
            cout << temp->value << " ";
            if (lefttoright) {
                if (temp->left_child)
                    next.push(temp->left_child);
                if (temp->right_child)
                    next.push(temp->right_child);
            }
            else {
                if (temp->right_child)
                    next.push(temp->right_child);
                if (temp->left_child)
                    next.push(temp->left_child);
            }
        }
        if (current.empty()) {
            lefttoright = !lefttoright;
            swap(current, next);
        }
    }
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
  zigzag(root);

    return 0;
}
