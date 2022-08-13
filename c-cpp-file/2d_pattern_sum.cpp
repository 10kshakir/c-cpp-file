#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum =0;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i ==0||i==n-1)
            {
            sum+=a[i][j];
            }
        }

    }
    for(int i =1;i<n-1;i++)
    {
        int j =n-1-i;
        if(i==j) sum+=a[i][i];
        else
        {
          sum+=a[i][j];
          sum+=a[i][i];
        }

    }
    cout<<sum<<endl;
}
