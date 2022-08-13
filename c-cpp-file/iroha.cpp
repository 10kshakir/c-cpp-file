#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char str[a][b];
    for(int i =0;i<a;i++)
    {
        for(int j =0;j<b;j++)
        {
            cin>>str[i][j];
        }
    }
    sort(str);
    for(int i =0;i<a;i++)
    {
        for(int j =0;j<b;j++)
        {
            cout<<str[i][j];
        }
    }

    return 0;
}
