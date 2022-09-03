#include<iostream>
#include<stack>
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

void level_order_reverse(Node* root)
{
    vector<int>a;
    if(root == NULL) return;
    queue <Node*> q;
    stack <Node*>st;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* node =q.front();
        q.pop();
        if(node!=NULL)
        {
            st.push(node);
            if(node->right_child!=NULL)
            {
                q.push(node->right_child);
            }
            if(node->left_child!=NULL)
            {
                q.push(node->left_child);
            }

        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);

            }
        }
    }
    while(!st.empty())
    {
       Node* d =st.top();
        a.push_back(d->value);
        st.pop();
    }
    return a;
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

   level_order_reverse(root);
    return 0;
}
