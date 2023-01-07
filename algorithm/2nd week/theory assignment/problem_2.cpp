#include<bits/stdc++.h>
using namespace std;

/*

0-----1     2-------3
      |     |
      |     |
      5-----4


NO  of edges 6
no  of nodes 6

6 6

0 1
1 0
2 3
1 5
5 4
2 4

0-----1     
      |     
      |     
      2


NO  of edges 6
no  of nodes 3

3 5

0 1
1 0
1 2
2 1
2 0
------------
3 4

0 1
1 0
1 2
2 1




*/
int main() {
 
    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    int adj_matrix[n][n]={};
 
    for(int i = 0 ; i < m ; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // There exists a directed edge from u to v
        adj_matrix[u][v]=1;
 
    }

    int count =0;
    for (int i =0;i<n;i++)
    {
        
        for(int j =0;j<n;j++)
        {
            if (adj_matrix[i][j] ==1)
            {
                if (adj_matrix[j][i] !=1)
                {
                    adj_matrix[i][j]=0;
                    count++;
                }
            }
        }
        
    }

  
    cout<<count<<" edges removed from the graph"<<endl;

   
 
    return 0;
}