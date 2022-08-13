#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[100002];
    cin>>str;
    char  str2[100002];
    int i =0;
    int j =0;
    while(str[i]!='\0')
    {
        str2[j]=str[i];
        i+=2;
        j++;

    }
    cout<<str2;

    return 0;

}
