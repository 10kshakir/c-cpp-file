/*
Input:
5 3
1 2
3 1
4 5

Output:
3 4 1 5 2
*/

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

const int N=2e5;
int visited[N];
vector<int> adj_list[N];


int n , m;

void bfs_topological( int ingdegree[],int len)
{
      queue<int> st;
      queue<int> q;

      for (int i =1;i<len;i++)
      {
            if (ingdegree[i] == 0)
            {
                  q.push(i);
            }
      }

      while (!q.empty())
      {
            int head = q.front();
            q.pop();

            st.push(head);

            for (int adj_node : adj_list[head])
            {
                  ingdegree[adj_node]--;

                  if (ingdegree[adj_node] == 0)
                  {
                        q.push(adj_node);
                  }

            }

            
      }

      while(!st.empty())
      {
            int head = st.front();
            st.pop();
            cout<<head<<" ";
      }
      cout<<endl;
}
bool detect_cycle(int node)
{
      visited[node]=1;

      for (int adj_node:adj_list[node])
      {

            if(visited[adj_node]==0)
            {
                  bool got_cycle= detect_cycle(adj_node);
                  if(got_cycle)
                  {
                      
                        return true;
                  } 
            }
            else if(visited[adj_node]==1){
                 
                  return true;
            }

      }

      visited[node]=2;
      return false;

}
int main()
{
      cin>>n>>m;
      int indegree[n+1]={};
      
       for (int i =0;i<m;i++)
      {
            int u,v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            indegree[v]++;
      }
     bool cycle_exist=false;

      for (int i =1;i<=n;i++)
      {
            
            
            bool got_cycle = detect_cycle(i);
            if(got_cycle) 
            {
                  cycle_exist=true;
                  break;
            }
            
      }

       if(cycle_exist)
      {
            cout<< "IMPOSSIBLE" <<endl;
      }
      else
      {
              bfs_topological(indegree,n+1);
      }


    

}