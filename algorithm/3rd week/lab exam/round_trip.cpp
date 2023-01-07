

/*
5 6

1 3
1 2
5 3
1 5
2 4
4 5

*/

#include <iostream>
#include<vector>
#include <queue>

using namespace std;

const int N=2e5;
int visited[N];
int parent [N];
vector<int> list;

vector<int> adj_list[N];

bool detect_cycle(int node)
{
      
      visited[node]=1;
      list.push_back(node);

      for (int adj_node:adj_list[node])
      {
            if(visited[adj_node] == 0)
            {
                  parent[adj_node]=node;
                  bool cycle_exist = detect_cycle(adj_node);

                  if (cycle_exist)
                  {
                        return true;
                  } 
            } else if( parent[node] != adj_node )
            {
                  list.push_back(adj_node);
                  return true;
            }
           
      }
      list.pop_back();
      return false;

}

int main()
{
      int n , m;
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
            if (visited[i]== 0){
                  
                  bool got_cycle = detect_cycle(i);
                  if(got_cycle) 
                  {
                        cycle_exist=true;
                        break;
                  }
            }
      }

      int last = list[list.size()-1];
      int count =1;

      if(cycle_exist)
      {
            for (int i =list.size()-2; i>=0;i--)
            {
                 if (last == list[i])
                 {
                  count++;
                  break;

                 }
                  count++;
            
            }
            cout<<count<<endl;

            cout<<last<<" ";
            for (int i =list.size()-2; i>=0;i--)
            {
                 if (last == list[i])
                 {
                  cout<<list[i]<<" ";
                  break;

                 }
                  count++;
                  cout<<list[i]<<" ";
            }
            
            

      }
      else
      {
            cout<< "IMPOSSIBLE" <<endl;
      }
      
}