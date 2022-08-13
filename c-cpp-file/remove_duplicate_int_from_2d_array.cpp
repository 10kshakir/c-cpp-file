#include <iostream>

using namespace std;

void print_2d_array(int *a,int row,int column)
{
     for(int i =0;i<row;i++)
     {
         for(int j =0;j<column;j++)
         {
             cout<<*((a+i*column)+j)<<" ";
         }
         cout<<endl;

     }
     cout<<endl;
}

int main()
{
     int row,column;
     cin>>row>>column;
     int a[row][column];
     for(int i =0;i<row;i++)
     {
         for(int j =0;j<column;j++)
         {
             cin>>a[i][j];
         }
     }

     int n =(row*column);
      int od_array[n];
      int ind =0;
       for(int i =0;i<row;i++)
     {
         for(int j =0;j<column;j++)
         {
             od_array[ind]=a[i][j];
             ind++;
         }
     }
     for(int i =0;i<n;i++)
     {
         for(int j =i+1;j<n;j++)
         {
             if(od_array[i]==od_array[j])
             {
                 od_array[j]=-1;
             }
         }
     }
     ind=0;
     for(int i=0;i<row;i++)
     {
         for(int j =0;j<column;j++)
         {
             a[i][j]=od_array[ind];
             ind++;
         }
     }
     print_2d_array(*a,row,column);
     return 0;
}
