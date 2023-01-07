#include <iostream>
#include <vector>
using namespace std;

const int N =1e5;
int visited[N];
vector <int> adj_list[N];

void dfs(int node)
{
    
      visited[node]=1;

      for(int adj_node:adj_list[node])
      {
            if(visited[adj_node]==0)
            {
                  
                  dfs(adj_node);
            }
      }
}

// Function to return the number of
// connected components in an undirected graph
int num_of_connected_Components(int nodes)
{


      int count =0;
     for(int i =0;i<nodes;i++)
     {
           if (adj_list[i].size()>0)
           {
             if(visited[i]!=1)
            {
                  dfs(i);
                  count++;
            }
           }
     }
     return count;

     
}



/*



5 4

1 2
2 3
1 3
4 5

6 5

1 2
2 3
1 3
4 5
6 0


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
      
      int count =num_of_connected_Components(nodes);

      cout<<count<<endl;


      return 0;
}

