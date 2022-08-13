#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[101];
    cin>>str;
    int *a =new int[26]{0};
    for(int i =0;i<strlen(str);i++)
    {
        int  b =str[i]-'a';
        a[b]++;
    }
    for(int i =0;i<26;i++)
    {
        if(a[i]==0)continue;
        if(a[i]>0&&a[i]%2!=0)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
