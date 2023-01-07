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
int NumberOfconnectedComponents(vector<int> vect)
{


      int count =0;
     for(int i =0;i<vect.size();i++)
     {
             if(visited[vect[i]]!=1)
            {
                  cout<<vect[i]<<" ";
                  dfs(i);
                  count++;
            }
            // cout<<vect[i]<<" ";
     }
     cout<<endl;
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
      vector<int> val;
      for(int i =0;i<edges;i++)
      {
            int u,v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
            val.push_back(u);

      }
      
      int count =NumberOfconnectedComponents(val);

      cout<<count<<endl;


      return 0;
}

