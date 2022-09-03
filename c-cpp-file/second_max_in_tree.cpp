#include<iostream>
#include<queue>
using namespace std;
class Node
{
public:
    int value;
    Node* left_child;
    Node* right_child;
    Node(int n)
    {
        value =n;
        left_child=NULL;
        right_child =NULL;
    }
};
int second_minimum(Node* root)
{
    if(root == NULL) return -1;
    queue <Node*> q;
    queue<int> t;
    q.push(root);
    q.push(NULL);
    int minimum =root->value;
    int second_min=-1;
    while(!q.empty())
    {
       Node* node =q.front();
        q.pop();
        if(node!=NULL)
        {
            if(node->value>minimum)
            {
                t.push(minimum);
                minimum=node->value;
                second_min++;

            }
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

            }
        }
    }

    if(second_min!=-1)
    {
        t.pop();
        return t.front();
    }else{
        return -1;
    }

}

int main()
{
    Node* root =new Node(2);
    Node* a =new Node(2);
    Node* b =new Node(5);
    Node* c =new Node(5);
    Node* d =new Node(7);

    root->left_child=a;
    root->right_child=b;
    b->left_child=c;
    b->right_child=d;
    cout<<second_minimum(root);

    cout<<endl;
    Node* root1 =new Node(2);
    Node* x =new Node(2);
    Node* y =new Node(2);
     root1->left_child=x;
    root1->right_child=y;
    cout<<second_minimum(root1);
    return 0;
}
