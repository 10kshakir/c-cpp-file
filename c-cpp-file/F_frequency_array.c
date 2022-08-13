#include <iostream>

using namespace std;
int main()
{
    char str[27];
    cin>>str;
    int *indx =new int[26]{0};

    for(int  i =0;str[i]!='\0';i++)
    {
        char ch =str[i];
         indx[ch-97]++;
    }
    for(int i =0;i<26;i++)
    {
        if(indx[i]>1)
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
        return 0;
}
