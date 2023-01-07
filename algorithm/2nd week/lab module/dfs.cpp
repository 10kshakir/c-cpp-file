#include <iostream>
#include <vector>
using namespace std;

const int N =1e5;
int visited[N];
vector <int> adj_list[N];
void dfs(int node)
{
      cout<<node<<endl;
      visited[node]=1;

      for(int adj_node:adj_list[node])
      {
            if(visited[adj_node]==0)
            {
                  dfs(adj_node);
            }
      }
}
/*

0-----1-----2-------3
      |     |
      |     |
      5-----4


NO  of edges 6
no  of nodes 6

6 8

0 1
0 1
1 1
1 2
2 3
1 5
5 4
2 4

0 1 2 3 4 5
--------------------
0-----1     2-------3
      |     |
      |     |
      5-----4


NO  of edges 5
no  of nodes 6

6 6

0 1
2 3
1 5
5 4
2 4
--------
6 8

1 5
1 4
5 4
4 0
5 0
4 2
0 2
2 3

1 4 5 0 2 3
*/



int main()
{
      int nodes ,edges;
      cin>>nodes>>edges;

      for(int i =0;i<edges;i++)
      {
            int u,v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);

      }
      int src=1;
      dfs(src);




      return 0;
}

