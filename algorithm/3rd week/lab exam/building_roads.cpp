/*
Input:
4 2
1 2
3 4

Output:
1
2 3
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N =3e5;
int visited[N];
vector <int> adj_list[N];
vector<int>result;

void bfs(int src)
{
      queue <int> q;
      visited[src]=1;
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
     

      for (int i =1;i<=nodes;i++)
      {
            if (visited[i] == 0)
            {
                  result.push_back(i);     
                  bfs(i);
            }
      }

      cout<<result.size()-1<<endl;

      for (int i =0;i<result.size()-1;i++)
      {
            cout<<result[i]<<"  "<<result[i+1]<<endl;
      }
      cout<<endl;
      return 0;

}