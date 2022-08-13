#include <iostream>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int d=2;
    int a[n][d];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<d;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum =0;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<1;j++)
        {
            sum=sum+(a[i][j+1]-a[i][j]);
        }
    }
    cout<<sum+n;
    return 0;
}
