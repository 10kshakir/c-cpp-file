#include<iostream>
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

int check_sum(Node* root,int &sum)
{
    if(root==NULL)return 0;

    int ls =check_sum(root->left_child,sum);
    int rs =check_sum(root->right_child,sum);
    sum+=abs(ls-rs);
    return ls+rs+root->value;
}

int findTilt(Node* root)
{
    if(root==NULL)return 0;
    int sum = 0;
     check_sum(root,sum);
    return sum;

}

int main()
{

    Node* root  = new Node(4);
    Node* a  = new Node(2);
    Node* b  = new Node(9);
    Node* c  = new Node(3);
    Node* d  = new Node(5);
    Node* e  = new Node(7);

    root->left_child= a;
    a->left_child=c;
    a->right_child = d;

    root->right_child = b;
    b->right_child=e;

    cout<<findTilt(root);

    return 0;
}
