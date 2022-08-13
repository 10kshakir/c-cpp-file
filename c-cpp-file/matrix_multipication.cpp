#include <iostream>

using namespace std;

void print_2d_array(int *a,int row,int column)
{
    cout<<endl;
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
    int n =3;
    int a[n][n];
    int b[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[n][n];
    int ind =0;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            c[i][j]=0;
            for(int k =0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }


    print_2d_array(*c,n,n);

    return 0;
}
