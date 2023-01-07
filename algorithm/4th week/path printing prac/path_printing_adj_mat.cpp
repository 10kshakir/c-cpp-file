// #include <iostream>
// #include<vector>
// #include<queue>
// #include<stack>
// #include<algorithm>
// using namespace std;


// const int N =1000;
// int  adj_matrix[N][N];

// int visited [N][N];
// int level [N][N];
// int parent[N][N];
// int n,m;


// void bfs(int src)
// {
//       visited[src]=1;
//       level[src]=1;
//       parent[src]=-1;
//       queue<int>q;

//       q.push(src);

//       while (!q.empty())
//       {     
//             int head = q.front();
//             q.pop();

//             for(int adj_node : adj_list[head])
//             {
//                   if (visited[adj_node] == 0)
//                   {
//                         q.push(adj_node);
//                         visited[adj_node]=1;
//                         level[adj_node]=level[head]+1;
//                         parent[adj_node]= head;
//                   }
                  
//             }
//       }
      
// }


// int main()
// {
//       cin>>n>>m;

//       for (int i =0;i<m;i++)
//       {
//             int u,v;
//             cin>>u>>v;
//            adj_matrix[u][v]=1;
//            adj_matrix[v][u]=1;

//       }
//       bfs(1);
//       int dest =n;
//       if (visited[dest] == 0)
//       {
//             cout<<"IMPOSSIBLE"<<endl;
//             return 0;
//       }

//       cout<<level[dest]<<endl;

//       vector<int > path;

//       int selected_node = dest;
//       while (true)
//       {
//             path.push_back(selected_node);

//             selected_node=parent[selected_node];
//             if (selected_node == -1) break;
//       }

//       reverse(path.begin(),path.end());
//       for (int node : path)
//       {
//             cout<<node<<" ";
//       }
//       cout<<endl;
      

//       return 0;
// }