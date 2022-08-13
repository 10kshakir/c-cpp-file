#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    int counter =0;
    int maximum =0;
    for(int i =0;i<n;i++)
    {
        if(str[i]=='I')counter ++;
        else counter --;
        maximum =max(maximum,counter);
    }

    cout<<maximum;
    return 0;
}
