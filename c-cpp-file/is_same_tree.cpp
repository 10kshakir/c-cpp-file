#include<iostream>
#include<vector>
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
bool isSame(Node* root1, Node* root2) {
    if(root1==NULL && root2==NULL) return true;

    return (root1->value==root2->value)
         &&isSame(root1->right_child, root2->right_child)
         && isSame(root2->left_child, root1->left_child);

}

int main()
{
    Node* root1 =new Node(1);
    Node* b =new Node(2);
    Node* c =new Node(3);
    Node* root2 =new Node(1);
    Node* e =new Node(2);
    Node* f =new Node(3);
    root1->left_child=b;
    root1->right_child=c;
    root2->left_child=e;
    root2->right_child=f;
    bool d = isSame(root1,root2);

    if(d)
   {
       cout<<"it's same tree";

   }
   else{ cout<<"it's not same tree";}

    return 0;
}
