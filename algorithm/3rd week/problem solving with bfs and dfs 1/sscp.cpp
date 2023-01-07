#include <iostream>
#include<vector>
#include <queue>

using namespace std;
const int n =1e5;
int visited[n];
int level[n];
vector <int> adj_list[n];
/*
0-----1-----2-------3
      |     |
      |     |
      5-----4


NO  of edges 6
no  of nodes 6

6 6

0 1
1 2
2 3
1 5
5 4
2 4


5 5

1 2
2 3
1 5
3 4
4 5

*/
void sscp_bfs(int src)
{
      queue <int> q;
      visited[src]=1;
      level[src]=0;
      q.push(src);
    

      while (!q.empty())
      {
            /* code */
            int head = q.front();
            q.pop();

       

            for (int adj_node:adj_list[head])
            {
                  if (visited[adj_node]==0)
                  {
                        visited[adj_node]=1;
                        level[adj_node]=level[head]+1;
                        q.push(adj_node);
                  }
            }

      }

}



int main()
{
      int nodes,edges;
      cin>>nodes>>edges;

      for(int i =0;i<edges;i++)
      {
            int u,v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
      }
      int src=1;
      sscp_bfs(src);

      for (int i =1;i<=nodes;i++)
      {
            cout<<i<<" -> "<<level[i]<<" "<<endl;
      }

      return 0;


}