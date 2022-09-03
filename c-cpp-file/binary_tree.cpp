#include<iostream>
#include<queue>
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

void in_order(TreeNode* root,string &st)
{
    if(root ==NULL)return;
    in_order(root->left_child,st);
    st+=to_string(root->value);
    st+=" ";
    in_order(root->right_child,st);
}

void post_order(TreeNode* root,string &st)
{
    if(root ==NULL)return;
    post_order(root->left_child,st);

    post_order(root->right_child,st);
    st+=to_string(root->value);
    st+=" ";
}
void pre_order(TreeNode* root,string &st)
{
    if(root ==NULL)return;
    st+=to_string(root->value);
    st+=" ";
    pre_order(root->left_child,st);

    pre_order(root->right_child,st);
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
    int n;
    cin>>n;
    TreeNode *allnodes[n];
    for(int i =0;i<n;i++)
    {
        allnodes[i]=new TreeNode(-1);
    }
    for(int i =0;i<n;i++)
    {
        int root,left,right;
        cin>>root>>left>>right;

        allnodes[i]->value=root;
        if(left>n-1||right>n-1)
        {
            cout<<"invalid index";
           continue;
        }
        if(left!=-1)
        {

            allnodes[i]->left_child=allnodes[left];
        }
        if(right!=-1)
        {

            allnodes[i]->right_child=allnodes[right];
        }
    }
//      print_tree(allnodes[0],0);
//    string st="";
//
//    in_order(allnodes[0],st);
//    cout<<"in order : "<<st<<endl;
//
//    string st2="";
//
//    pre_order(allnodes[0],st2);
//    cout<<"pre order : "<<st2<<endl;
//     string st3="";
//
//    post_order(allnodes[0],st3);
//    cout<<"post order : "<<st3<<endl;

//    level_order_print(allnodes[0]);
//    cout<<endl;
//    cout<<get_maximum_from_level(allnodes[0],3);
    display(allnodes[0]);
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
