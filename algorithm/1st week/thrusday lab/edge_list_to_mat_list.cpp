#include<iostream>
#include<vector>
using namespace std;

int main() {

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    // TODO: Declare your favorite data structures here.

    vector <vector <int>  > edge_list;

    for(int i = 0 ; i < m ; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v

        edge_list.push_back({u,v});
    }

    // TODO: Print your representation like shown in module - 2
//      for(int i =0;i<edge_list.size();i++)
//       {
//             cout<<edge_list[i][0]<<"  "<<edge_list[i][1]<<endl;
//       }
      
      vector<int>adj_list[n];
      int adj_matrix[n][n]={};
       for(int i =0;i<edge_list.size();i++)
      {
            int r =edge_list[i][0];
            int v =edge_list[i][1];
            adj_list[r].push_back(v);
            adj_list[v].push_back(r);
            adj_matrix[r][v]=1;
            adj_matrix[v][r]=1;
      }

       for (int i =0;i<n;i++)
      {
            cout<<i<<" -> ";
            for(int j =0;j<adj_list[i].size();j++)
            {
                  cout<<adj_list[i][j]<<"  ";
            }
            cout<<endl;
      }

      for (int i =0;i<n;i++)
      {
            for (int j =0;j<n;j++)
            {
                  cout<<adj_matrix[i][j]<<"  ";
            }
            cout<<endl;

      }

    return 0;
}
