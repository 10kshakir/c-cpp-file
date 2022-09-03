#include<iostream>
#include<queue>
#include <iomanip>
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
void average_level(Node* root)
{
    if(root == NULL) return;
    queue <Node*> q;
    queue<float> qf;
   float sum =0;
    int count =0;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* node =q.front();
        q.pop();
        if(node!=NULL)
        {

            sum+=node->value;
            count++;
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
                float d = float(sum/count);
                qf.push(d);
                sum=0;
                count =0;
                q.push(NULL);

            }else{
                float d = float(sum/count);
                qf.push(d);
                sum=0;
                count =0;
            }
        }
    }

    while(!qf.empty())
    {
        cout<<setprecision(4)<<qf.front()<<" ";
        qf.pop();
    }

}

void display(Node * root)
{
    if(root ==NULL)return;
    cout<<root->value<<" ";
    display(root->left_child);
    display(root->right_child);
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



    average_level(root);
    return 0;
}
