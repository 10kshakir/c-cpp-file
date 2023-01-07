/*
Input:
5 3
1 2
3 1
4 5

Output:
3 4 1 5 2
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N =2e5;
int visited[N];
vector <int> adj_list[N];
stack<int> node_stack;
bool detect_cycle(int node)
{
      visited[node]=1;

      for (int adj_node:adj_list[node])
      {

            if(visited[adj_node]==0)
            {
                  bool got_cycle= detect_cycle(adj_node);
                  if(got_cycle) return true;
            }
            else if(visited[adj_node]==1){
                  return true;
            }

      }
      node_stack.push(node);
      visited[node]=2;
      return false;

}
bool dfs(int node)
{
      visited[node]=1;

      for(int adj_node: adj_list[node])
      {
            if(visited[adj_node]==0)
            {
                  dfs(adj_node);
            }
      }
      node_stack.push(node);
      visited[node]=2;
      return false;
}
int main()
{
      int n , m;
      cin >> n >> m;
      for(int i =0; i<m ; i++)
      {
            int u, v;
            cin>> u >> v;
            adj_list[u].push_back(v);
      }

     
      
        bool cycle_exist=false;

      for (int i =1;i<=n;i++)
      {
            if (visited[i]== 0){
                  
                  bool got_cycle = detect_cycle(i);
                  if(got_cycle) 
                  {
                        cycle_exist=true;
                        break;
                  }
            }
      }

      if(cycle_exist)
      {
            cout<< "IMPOSSIBLE" <<endl;
      }
      else
      {
            
            while(!node_stack.empty())
            {
                  cout<<node_stack.top()<<" ";
                  node_stack.pop();
            }

            cout<<endl;
      }
     
   
     return 0;


}