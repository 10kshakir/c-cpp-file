#include <iostream>

using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    if(row!=col) return 0;

    int a[row][col];
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }


    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            if(i==j)continue;
            if(a[i][j]>0)
            {
                cout<<"It's not diagonal matrix";
            }
        }
    }

    //start scalar
    int save =a[0][0];
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            if(i ==j)
            {
                if(a[i][j]!=save)
                {
                  cout<<"It's diagonal and not a scalar matrix";
                  return 0;
                }
            }
        }
    }


    cout<<"It's diagonal and a scalar matrix";


    return 0;
}
