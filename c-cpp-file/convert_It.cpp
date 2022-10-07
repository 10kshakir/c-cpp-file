#include<iostream>
#include<queue>
#include<map>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
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


int main()
{
    int a;
    cin>>a;
    TreeNode* root =new TreeNode(a);
    queue<TreeNode*> q;
    q.push(root);

    vector<int> v;
    v.push_back(a);
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
                n1 =new TreeNode(x);
                v.push_back(x);
            }
        if(y!=-1)
            {
                n2 =new TreeNode(y);
                v.push_back(y);
            }

        present_root->left_child=n1;
        present_root->right_child=n2;

        if(n1!=NULL)q.push(n1);
        if(n2!=NULL)q.push(n2);

    }
   make_heap(v.begin(), v.end());



  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      if(n==1)
      {
          int d ;
          cin>>d;
           v.push_back(d);

        push_heap(v.begin(), v.end());


      }else
      {
          cout << v.front() << endl;

        // using pop_heap() to delete maximum element
        pop_heap(v.begin(), v.end());
            v.pop_back();


      }
  }
}
