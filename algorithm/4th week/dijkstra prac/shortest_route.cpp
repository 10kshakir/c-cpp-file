#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N =1e5+5;
const int INF=1e9;
int visited[N];
int d[N];
int n,e,q;
vector <pair<int,int>> adj_list[N];

void dijkstra(int src) {
    for(int i = 1 ; i <= n ; i++) {
        d[i] = INF;
        visited[i]=0;
    }
    d[src] = 0;

    for(int i = 0 ; i < n ; i++) {
        int selected_node = -1;
        for(int j = 1 ; j <= n ; j++) {
            if(visited[j] == 1) continue;
            if(selected_node == -1 || d[selected_node] > d[j]) {
                selected_node = j;
            }
        }
        visited[selected_node] = 1;

        for(auto adj_entry: adj_list[selected_node]) {
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if(d[selected_node] + edge_cst < d[adj_node]) {
                d[adj_node] = d[selected_node] + edge_cst;
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

4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2
*/
int main() {

    cin >> n >> e >>q;

    for(int i = 0 ; i < e ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({ v, w });
        adj_list[v].push_back({ u, w });
    }

      while (q>0)
      {
            int src ,dest;
            cin >>src >>dest;
            dijkstra(src);

            if (d[dest] == INF)
            {
                  cout<<-1<<endl;
            }
            else cout<<d[dest]<<endl;
            q--;
      }
      
    return 0;
}