#include <iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;


const int N =1e5+5;
vector<int> adj_list[N];

int visited [N];
int level [N];
int parent[N];
int n,m;




void dfs(int src)
{
      visited[src]=1;

      for (int node : adj_list[src])
      {
            if (visited[ node ] == 0)
            {
                  level[node]=level[src]+1;
                  parent[node]=src;
                  dfs(node);

            }
      }
      
}
int main()
{
      cin>>n>>m;

      for (int i =0;i<m;i++)
      {
            int u,v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);

      }
      int src=1;
      parent[src]=-1;
      level[src]=1;
      dfs(src);
      int dest =n;
      if (visited[dest] == 0)
      {
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
      }

      cout<<level[dest]<<endl;

      vector<int > path;

      int selected_node = dest;
      while (true)
      {
            path.push_back(selected_node);

            selected_node=parent[selected_node];
            if (selected_node == -1) break;
      }

      reverse(path.begin(),path.end());
      for (int node : path)
      {
            cout<<node<<" ";
      }
      cout<<endl;
      

      return 0;
}