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
      
}


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

      return 0;
}