#include <iostream>

using namespace std;
int main()
{
    char str[100002];
    cin>>str;
    int *indx =new int[26]{0};

    for(int  i =0;str[i]!='\0';i++)
    {
        char ch =str[i];
         indx[ch-97]++;
    }
    char  c =0;
    for(int i =0;i<26;i++)
    {
        if(indx[i]==0)
        {
           c=i+97;
           cout<<c;
           return 0;
        }
    }
    cout<<"None";
    return 0;
}
