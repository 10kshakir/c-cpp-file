/*
4 5

1 3
2 1
2 4
3 2
3 4

cycle

4 3

1 3
2 1
2 4


not cycle

Input:
5 6
1 3
1 2
5 3
1 5
2 4
4 5

Output:
4
3 5 1 3


6 6

1 2
2 3
2 6
5 3
3 4
4 5




*/

#include <iostream>
#include<vector>
#include <queue>

using namespace std;

const int N=2e5;
int visited[N];
int mark[N];
int parent[N];
int parent1[N];

vector<int> adj_list[N];

vector<int > st;
int n , m;
int count =1;
vector<int> result;
bool cycle_detection(int node)
{
      queue<int>q;
      q.push(node);
      visited[node]=1;
      parent[node]=-1;
      
      while (!q.empty())
      {
            int head = q.front();
            q.pop();
            
            for (int adj_node : adj_list[head])
            {
                  if (visited[adj_node] == 1 && parent[head]!= adj_node)
                  {
                       result.push_back(adj_node) ;
                       
                        return true;
                  }else if(visited[adj_node] == 0 )
                  {
                        
                        parent[adj_node]=head;
                        visited[adj_node]=1;
                        q.push(adj_node);
                  }
                 
                  
            }
      }
      return false;
      
}
void bfs(int node)
{
      queue<int>q;
      q.push(node);
      mark[node]=1;
      parent1[node]=-1;
      
      bool cycle=false;
      while (!q.empty())
      {
            int head = q.front();
            q.pop();
            st.push_back(head);
            for (int adj_node : adj_list[head])
            {
                  if (mark[adj_node] == 1 && parent1[head]!= adj_node)
                  {
                        st.push_back(adj_node);

                       cycle =true;
                        break;
                  }else if(mark[adj_node] == 0 )
                  {
                        
                        parent1[adj_node]=head;
                        mark[adj_node]=1;
                        q.push(adj_node);
                  }
                 
                  
            }
            if (cycle) break;
      }
     st.push_back(node);
      
}


int main()
{
      
      cin >>n >>m;

      for (int i =0;i<m;i++)
      {
            int u,v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
      }

     
      bool cycle_exist=false;

      for (int i =1;i<=n;i++)
      {
            
           if(visited[i] == 0)
           {
             
            bool got_cycle = cycle_detection(i);
            if(got_cycle) 
            {
                  cycle_exist=true;
                  break;
            }
           }
            
      }
   
      if(cycle_exist)
      {
            for (int node : result)
            {
                  bfs(node);
            }
            
            cout<<st.size()<<endl;
            
           
      }
      else
      {
            cout<< "IMPOSSIBLE" <<endl;
      }


      
}