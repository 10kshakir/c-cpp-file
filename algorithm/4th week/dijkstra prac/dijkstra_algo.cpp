#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
const int INF =1e9;
int visited [N];
int d[N];
vector < pair<int,int> > adj_list[N];
int n,e;
void dijkstra(int src)
{
      for (int i =1; i<=n ; i++)
      {
            d[i]=INF;
            visited[i]=0;
      }

      d[src]=0;

      for (int i =0;i<n;i++)
      {
            int selected_node =-1;
            for(int j =1 ; j<=n;j++)
            {
                  if (visited[j] == 1) continue;
                 if (selected_node == -1 || d[selected_node] > d[j])
                 {                                    
                        selected_node=j;
                 
                  }
            }
            visited[selected_node]= 1;

            for (auto adj_entry: adj_list[selected_node])
            {
                  int adj_node =adj_entry.first;
                  int edge_cost =adj_entry.second;

                  if(d[selected_node]+edge_cost < d[adj_node])
                  {
                        d[adj_node]=d[selected_node]+edge_cost ;
                  }
            }
      }
}
/*
5 5
1 2 3
1 3 2
2 5 4
3 4 4
4 5 2

0 3 2 6 7
*/
int main()
{
     cin >> n >> e ;

     for (int i =0;i<e;i++)
     {
            int u,v,w;
            cin>> u >>v >>w;
            adj_list[u].push_back({v,w});
            adj_list[v].push_back({u,w});
     }
     int src=1;
     int dest =n;
      dijkstra(src);
      
      // vector <int>path;
      // path.push_back(dest);
      // while (true)
      // {
      //       if (dest == src) break;
      //     for (auto adj_entry : adj_list[dest])
      //     {
      //             int adj_node = adj_entry.first;
      //             int edge_cost= adj_entry.second;

      //             int distance = d[dest] - edge_cost;

      //             if (distance == d[adj_node])
      //             {
      //                   path.push_back(adj_node);
      //                   dest =adj_node;
      //             }
      //     }  
      // }
      
      // reverse(path.begin(),path.end());

      // for(int node:path)
      // {
      //       cout<<node<<" ";
      // }
      for (int i =1;i<=n;i++)
      {
            cout<<d[i]<<" ";
      }
       cout<<endl;
      return 0;
}