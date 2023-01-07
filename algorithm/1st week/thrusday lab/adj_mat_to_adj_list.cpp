#include <iostream>
#include <vector>

using namespace std;

//    0 1 0 0 
//    1 0 1 1 
//    0 1 0 1 
//    0 1 1 0 

// 0->1
// 1->0 2 3
// 2->1 3
// 3->1 2

int main()
{
      int nodes =4;
      int matrix[nodes][nodes] ={};

     matrix[0][1]=1;
     matrix[1][0]=1;

     matrix[1][2]=1;
     matrix[2][1]=1;

     matrix[2][3]=1;
     matrix[3][2]=1;

     matrix[3][1]=1;
     matrix[1][3]=1;



      vector <int> adj_list[nodes];

      for (int i =0;i<nodes;i++)
      {
            for(int j =0;j<nodes;j++)
            {
                  if(matrix[i][j]==1)
                  {
                        adj_list[i].push_back(j);
                  }
            }
            
      }


      for (int i =0;i<nodes;i++ )
      {
            cout<<i<<" -> ";
            for (int j =0;j<adj_list[i].size();j++)
            {
                  cout<<adj_list[i][j]<<" ";
            }
            cout<<endl;
      }
      return 0;

}