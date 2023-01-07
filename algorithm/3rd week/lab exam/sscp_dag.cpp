#include <iostream>
#include<vector>
#include <queue>

using namespace std;
const int n =1e5;
int visited[n];
int level[n];
vector <int> adj_list[n];
/*


5 6


1 2
2 3
1 5
3 4
5 4
1 4
1

5 5
1 2
2 3
1 4
2 4
3 5
1


5 6

1 2
2 3
1 5
1 4
2 4
3 5
1



5 4

1 2
2 3
1 5
3 4
1


*/


void sscp_dfs(int src)
{
      visited[src]=1;
     

      for(int adj_node:adj_list[src])
      {
             
           
          
                   if(level[adj_node] == 0)
                   {
                        level[adj_node]=level[src]+1;
                   }else{
                        if (level[adj_node] > level[src]+1)
                        {
                              level[adj_node]=level[src]+1;
                        }
                   }
                  sscp_dfs(adj_node);
           

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
        
      }
      int src;
      cin>>src;
      sscp_dfs(src);

      for (int i =1;i<=nodes;i++)
      {
            cout<<i<<" -> "<<level[i]<<" "<<endl;
      }

      return 0;


}