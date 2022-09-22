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

Node*  invert_tree(Node* root)
{
    Node * root1 =root;
    if (root == NULL)
		return root;
	else
	{
        Node* temp;


		invert_tree(root1->left_child);
		invert_tree(root1->right_child);


		temp	 = root1->left_child;
		root1->left_child = root1->right_child;
		root1->right_child = temp;
	}
	return root1;
}
void display(Node *root)
{
    if(root ==NULL)return;
    cout<<root->value<<" ";
    display(root->left_child);

    display(root->right_child);
}
int main()
{
    Node *root =new Node(4);
    Node *a =new Node(2);
    Node *b =new Node(7);
    Node *c =new Node(1);
    Node *d =new Node(3);
    Node *e =new Node(6);
    Node *f =new Node(9);

    root->left_child= a;
    a->left_child=c;
    a->right_child=d;

     root->right_child= b;
    b->left_child=e;
    b->right_child=f;

    display(root);
    cout<<endl;
    root =invert_tree(root);
    display(root);


    return 0;
}
