#include <iostream>

using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];
    if(row!=col) return 0;
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
            if(a[i][j]!=a[j][i])
            {
                cout <<"It's not symmetric"<<endl;
                return 0;
            }
        }
    }
    cout <<"It's symmetric"<<endl;
    return 0;
}
