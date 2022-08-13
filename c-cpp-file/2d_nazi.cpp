#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=n,column=n;
    int a[row][column];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>a[i][j];

        }
    }

    int mid =n/2;
    int sum =0;

     for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i==mid||j==mid)
            {
                sum+=a[i][j];
            }
            if(i==0&&j<mid)
            {
              sum+=a[i][j];
            }
            if(i==n-1&&j>mid)
            {
                sum+=a[i][j];
            }if(j==0&&i>mid)
            {
                 sum+=a[i][j];
            }if(j==n-1&&i<mid)
            {
                 sum+=a[i][j];
            }
        }

    }
    cout<<endl<<sum<<endl;

    return 0;
}
