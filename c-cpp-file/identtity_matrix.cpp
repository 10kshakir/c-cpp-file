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
    int n;
    cin>>n;
    int a[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i ==j)
            {
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }
        }
    }
    print_2d_array(*a,n,n);
    return 0;
}
