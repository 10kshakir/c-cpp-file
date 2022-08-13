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

    for(int i =0;i<row;i++)
    {
        for(int j =0,k=column-1;j<k;j++,k--)
        {
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
        }
    }
    print_2d_array(*a,row,column);
}
