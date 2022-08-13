#include <iostream>

using namespace std;
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
    int maximum =a[0][0];
    int r,c;
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            if(a[i][j]>maximum)
            {
                maximum=a[i][j];
                r=i;c=j;
            }
        }
    }

    cout<<endl<<maximum<<endl;
    cout<<"location : " <<"["<<r<<"]"<<"["<<c<<"]";
    return 0;
}
