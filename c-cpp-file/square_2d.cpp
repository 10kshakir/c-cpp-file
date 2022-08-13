#include <iostream>
#include <cmath>

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
    int n;
    cin>>n;
    int d[n];
    for(int i =0;i<n;i++)
    {
        cin>>d[i];
    }
    n=sqrt(n);
    int ind =0;
    int a[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            a[i][j]=d[ind];
            ind++;
        }
    }

    print_2d_array(*a,n,n);
    return 0;
}
