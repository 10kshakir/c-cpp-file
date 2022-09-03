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

void zigzag_order(Node* root)
{
    if(root == NULL) return;
    int count = 0;
    queue <Node*> q;
    queue <Node*>q1;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* node =q.front();
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
       Node* d =q1.front();
        cout<<d->value<<" ";
        q1.pop();
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
//   b->left_child=e;
//   b->right_child=f;
  zigzag_order(root);

    return 0;
}
