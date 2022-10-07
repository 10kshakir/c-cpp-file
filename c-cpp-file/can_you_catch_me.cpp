#include<iostream>
#include<queue>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

class TreeNode
{
public:
    char value;
    TreeNode* left_child;
    TreeNode* right_child;
    TreeNode(char n)
    {
        value =n;
        left_child=NULL;
        right_child =NULL;
    }
};
bool isPalindrome(string S)
{

    string P = S;

    reverse(P.begin(), P.end());

    if (S == P) {
        return true;
    }

    else {
       return false;
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
int ans =0;
void solution(TreeNode* root,string s)
{
        if(root==NULL)
        {return ;}
        if(root->left_child==NULL && root->right_child==NULL)
        {
            bool d =isPalindrome(s+=root->value);


            if (d)
            {
                 ans++;
                 return;
            }
            else return;

        }

        solution(root->left_child,s+root->value);
        solution(root->right_child,s+root->value);
}
int main()
{
    string st ;
    cin>>st;
    int a ;
    cin>>a;
    TreeNode* root =new TreeNode(st[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i =1;
    while(!q.empty())
    {
        TreeNode* present_root =q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        TreeNode* n1=NULL;
        TreeNode* n2=NULL;
        if(x!=-1)
        {
            n1 =new TreeNode(st[x]);

        }

        if(y!=-1)

        {

            n2 =new TreeNode(st[y]);


        }

        present_root->left_child=n1;
        present_root->right_child=n2;

        if(n1!=NULL)q.push(n1);
        if(n2!=NULL)q.push(n2);

    }

    solution(root,"");
    cout<<ans;
    return 0;
}
