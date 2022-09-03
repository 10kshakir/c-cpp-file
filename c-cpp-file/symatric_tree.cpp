#include<iostream>
#include<vector>
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





bool isMirror(Node* root1,Node* root2){

    if(root1==NULL && root2==NULL)return true;
    if(root1==NULL || root2==NULL)return false;

    return (root1->value == root2->value)
        && isMirror(root1->right_child,root2->left_child)
        && isMirror(root1->left_child,root2->right_child);
}

 bool isSymmetric(Node* root) {
    return isMirror(root,root);
}

int main()
{
    Node* root =new Node(1);
   Node* a =new Node(2);
   Node* b =new Node(2);
   Node* c =new Node(3);
   Node* d =new Node(4);
   Node* e =new Node(4);
  Node* f =new Node(3);

   root->left_child=a;
   root->right_child=b;
    a->left_child=c;
   a->right_child=d;

   b->left_child=e;
   b->right_child=f;

   bool t = isSymmetric(root);
   if(t)
   {
       cout<<"it's Symmetric";

   }
   else{ cout<<"it's not Symmetric";}
    return 0;
}
