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
    cout<<"Major diagonal: ";
    for(int i =0;i<n;i++)
    {

        cout<<a[i][i]<<" ";


    }
    cout<<endl<<"Minor diagonal: ";
    for(int i =0;i<n;i++)
    {
        int j =n-1-i;
        cout<<a[i][j]<<" ";
    }
    return 0;
}
