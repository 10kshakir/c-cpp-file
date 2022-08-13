#include <iostream>

#include <string.h>

using namespace std;
int main()
{
    char str[102];
    cin>>str;
    int c = 0;
    int len =strlen(str);
    for(int i =0;str[i]!='\0';i++)
    {
        c++;

    }
    c=c-2;
    cout<<str[0]<<c<<str[len-1];
    return 0;
}
