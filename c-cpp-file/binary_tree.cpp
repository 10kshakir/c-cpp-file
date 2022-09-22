#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

class TreeNode
{
public:
    int value;
    TreeNode* left_child;
    TreeNode* right_child;
    TreeNode(int n)
    {
        value =n;
        left_child=NULL;
        right_child =NULL;
    }
};

void vertical_order(TreeNode* root,int d , map<int, vector<int >> &m)
{
    if(root==NULL)
        return;
    m[d].push_back(root->value);
    vertical_order(root->left_child,d-1,m);
    vertical_order(root->right_child,d+1,m);
}
void in_order(TreeNode* root)
{
    if(root ==NULL)return;
    in_order(root->left_child);
    cout<<root->value<<" ";
    in_order(root->right_child);
}

void post_order(TreeNode* root)
{
    if(root ==NULL)return;
    post_order(root->left_child);

    post_order(root->right_child);
    cout<<root->value<<" ";
}
void pre_order(TreeNode* root)
{
    if(root ==NULL)return;
    cout<<root->value<<" ";
    pre_order(root->left_child);

    pre_order(root->right_child);
}

void space_print(int level)
{
    for(int i =0;i<level;i++)
    {
        cout<<"  ";
    }
}

void print_tree(TreeNode* root,int level)
{
    if(root == NULL) return;

    if(root->left_child == NULL && root->right_child == NULL)
    {
        cout<<root->value<<endl;
        return;
    }else{
        cout<<endl;
        space_print(level);
        cout<<" root : "<<root->value<<endl;
    }

    if(root->left_child!=NULL)
    {
        space_print(level);
        cout<<" left : ";
        print_tree(root->left_child,level+1);
    }

    if(root->right_child!=NULL)
    {
        space_print(level);
        cout<<" right : ";
        print_tree(root->right_child,level+1);
    }
}

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

int get_maximum_from_level(TreeNode* root,int level)
{
    if(root==NULL)return -1;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    int current_level = 0;
    int maximum = INT_MIN;
    while(!q.empty())
    {
        TreeNode* chk =q.front();
        q.pop();
        if(chk!=NULL)
        {
            if(current_level==level)
            {
                if(chk->value>maximum)
                {
                    maximum=chk->value;
                }


            }
            if(chk->left_child!=NULL)
            {
                q.push(chk->left_child);
            }
            if(chk->right_child!=NULL)
            {
                q.push(chk->right_child);
            }
        }else{
            if(!q.empty())
            {
                q.push(NULL);
                current_level++;
            }
        }
    }
    return maximum;
}

void display(TreeNode *root)
{
    if(root ==NULL)return;
    cout<<root->value;
    display(root->left_child);

    display(root->right_child);
}

int main()
{
   TreeNode* root = new TreeNode(1);
   TreeNode* a = new TreeNode(2);
   TreeNode* b = new TreeNode(3);
   root ->left_child =a;
   root ->right_child =b;

   TreeNode* d = new TreeNode(4);
   TreeNode* e = new TreeNode(5);
   a->left_child=d;
   a->right_child=e;

//   TreeNode* f = new TreeNode(20);
   TreeNode* g = new TreeNode(7);
//   b->left_child=f;
   b->left_child=g;

//   TreeNode* h  = new TreeNode(6);
//   TreeNode* i = new TreeNode(9);
//   d->left_child=h;
//   d->right_child=i;

   TreeNode* k = new TreeNode(6);
   e->right_child=k;

//    TreeNode* j = new TreeNode(35);
//
//    g->right_child=j;

//    cout<<"pre-order : ";
//    pre_order(root);
//    cout<<endl;
//
//    cout<<"inorder : ";
//    in_order(root);
//    cout<<endl;
//
//     cout<<"postorder : ";
//    post_order(root);
//    cout<<endl;
//
//    cout<<"level order : "<<endl;
//    level_order_print(root);
//    cout<<endl;

    map<int,vector<int>>M;
    vertical_order(root,0,M);
    for(auto i: M)
    {
        cout<<i.first<<" ";
        for(int j =0;j<(i.second).size();j++)
        {
            cout<<(i.second)[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
/*
9
0  1  2
1  3  4
2  5  6
3 -1 -1
4 -1 -1
5  7  8
6 -1 -1
7 -1 -1
8 -1 -1


root: 0
 Left :
   root: 1
   Left : 3
   right : 4
 right :
   root: 2
   Left :
     root: 5
     Left : 7
     right : 8
   right : 6
*/
