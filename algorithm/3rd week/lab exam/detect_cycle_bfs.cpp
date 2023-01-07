/*
4 5

1 3
2 1
2 4
3 2
3 4

cycle

4 4

1 3
2 1
2 4
3 4

not cycle






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

bool cycle_detection( int ingdegree[],int len)
{
     
      queue<int> q;

      for (int i =1;i<len;i++)
      {
            if (ingdegree[i] == 0)
            {
                  q.push(i);
            }
      }
      int cnt =0;
      while (!q.empty())
      {
            int head = q.front();
            q.pop();

            cnt++;
            for (int adj_node : adj_list[head])
            {
                  ingdegree[adj_node]--;

                  if (ingdegree[adj_node] == 0)
                  {
                        q.push(adj_node);
                  }

            }

            
      }

      if (cnt == n) return false;
      else return true;

     
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
     bool cycle_exist=cycle_detection(indegree,n+1);

    

       if(cycle_exist)
      {
            cout<< "cycle exist" <<endl;
      }
      else
      {
             cout<<"cycle doesn't exist"<<endl;
      }


    

}