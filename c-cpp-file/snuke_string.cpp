#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[200001];
    cin>>str;
    int a =0;
    int b =0;
    for(int i =0;i<strlen(str);i++)
    {
        if(str[i]='A')
        {
            a=i+1;
           break;
        }
    }
     for(int i =0;i<strlen(str);i++)
    {
        if(str[i]='Z')
        {
            b=i+1;
         break;
        }
    }
    cout<<b-a+1;
    return 0;
}
